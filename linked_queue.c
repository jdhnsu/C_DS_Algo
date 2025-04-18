#include <stdio.h>
#include <stdlib.h>
#include "linked_queue.h"

link_queue* init_link_queue()
{
	link_queue* q = (link_queue*)malloc(sizeof(link_queue));
	if (q == NULL)
	{
		printf("error: malloc from init_link_queue failed\n");
		return;
	}
	q->front = NULL;
	q->rear = NULL;
	q->size = 0;
	return q;
}

// 入队
void push_link_queue(link_queue* q, elem_type value)  
{  
   node* new_node = (node*)malloc(sizeof(node));  
   if (new_node == NULL)  
   {  
       printf("error: malloc from push_link_queue failed\n");
       return;  
   }  
   new_node->value = value;  
   new_node->next = NULL;  
   if (q->front == NULL)  
   {  
       q->front = new_node;  
       q->rear = new_node;  
   }  
   else  
   {  
       q->rear->next = new_node;  
       q->rear = new_node;  
   }  
   q->size++;  
}

// 出队
elem_type pop_link_queue(link_queue* q)
{
	if (empty_link_queue(q))
	{
		printf("error: pop from empty link_queue\n");
		return;
	}
	link_queue* tmp = q->front;
	elem_type a = q->front->value;
	q->front = q->front->next;
	q->size--;
	return a;
}


// 判空
int empty_link_queue(link_queue* q)
{
	if (q->size == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


// 打印
int print_link_queue(link_queue* q)
{
	if (empty_link_queue(q))
	{
		printf("error: queue empty form:  print_link_queue\n");
		return;
	}
	node* head = q->front;
	printf("[");
	while (1)
	{
		printf(" %d ", head->value);
		head = head->next;
		if (head == NULL)
			break;
	}
	printf("]\n");
}