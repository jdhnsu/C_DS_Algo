#include <stdio.h>
#include <stdlib.h>
#include "array_queue.h"

/*@-------------
   # 设计思路更新(原版漏洞太多):
    设计圆环式队列,当rear == size时,循环到数组的[0]位,当然这样的队列仍然遵循`先进先出原则`
   ## 实现思路:
    通过取模运算,使得rear和front都在数组的[0,size-1]范围内,这样就能实现循环队列的功能.
  # 优点解析:
     在传统的队列中，当队尾到达队列的末尾时，即使队列前面还有空闲空间，也无法继续入队，导致空间浪费。而环形队列通过取模运算，\n
     使得队尾指针可以在到达队列末尾后，从头开始继续使用队列的空闲空间，从而提高了空间的利用率。
@-------------*/


// 初始化队列
array_queue *init_array_queue()
{
    array_queue *q = (array_queue *)malloc(sizeof(array_queue));
    if (q == NULL)
    {printf("error: malloc failed[From init_queue]"); return NULL;}
    memset(q,0,sizeof(array_queue));
    q->front = 0;
    q->rear = 0;
    q->size = 0; 
    return q;
}

// 判空
int empty_array_queue(array_queue *q)
{
    if (q->size == 0)
        return 1;
    else
        return 0;
}

// 判断满
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
        {printf("error: queue is full[From push_queue]"); return;}
    q->data[q->rear] = value;
    q->rear = (q->front + q->size + 1) % MAX_QUEUE;
    q->size++;
} 

// 出队
elem_type pop_array_queue(array_queue *q)
{
    if (empty_array_queue(q)) 
        {printf("error: queue is empty[From pop_queue]"); return -1;}
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
            return ;
        }
    for (int i=q->front; i!=q->rear;i = (i+1)%MAX_QUEUE)
        {
            printf("[");
            printf("%d ",q->data[i]);
            printf("]\n");
        }
}



// if while for void return fuck shit def sleep