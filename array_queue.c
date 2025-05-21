#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 添加此行以确保 memset 函数可用
#include "array_queue.h"


// 初始化队列
array_queue *init_array_queue()
{
   array_queue *q = (array_queue *)malloc(sizeof(array_queue));
   if (q == NULL)
   {
       printf("error: malloc failed[From init_queue]");
       return NULL;
   }
   memset(q, 0, sizeof(array_queue));
   q->front = 0;
   q->rear = 0;
   q->size = 0;
   return q;
}

// 判空
int empty_array_queue(array_queue* q)
{
    if (q->size == 0)
        return 1;
    else
        return 0;
}



// 判满
int full_array_queue(array_queue *q)
{
   if (q->size == MAX_QUEUE)
       return 1;
   else
       return 0;
}

// 入队
void push_array_queue(array_queue *q, elem_type value)
{
   if (full_array_queue(q))
   {
       printf("error: queue is full[From push_queue]");
       return;
   }
   q->data[q->rear] = value;
   q->rear = (q->front + q->size + 1) % MAX_QUEUE;
   q->size++;
}

// 出队
elem_type pop_array_queue(array_queue *q)
{
   if (empty_array_queue(q))
   {
       printf("error: queue is empty[From pop_queue]");
       return -1;
   }
   elem_type value = q->data[q->front];
   q->front = (q->front + 1) % MAX_QUEUE;
   q->size--;
   return value;
}

// 打印队列
void print_array_queue(array_queue *q)
{
   if (empty_array_queue(q))
   {
       printf("error :\n");
       return;
   }
   int j = q->front;
   for (int i = 0; i < q->size; i++)
   {
       printf("[");
       printf("%d ", q->data[j % MAX_QUEUE]);
       printf("]\n");
       j++;
   }
}