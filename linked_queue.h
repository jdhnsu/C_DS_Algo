#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H
#define elem_type int

typedef struct node
{
    elem_type value;
    struct node* next;
} node;

typedef struct linked_queue
{
   struct node* front;
   struct node* rear;
    int size;
}link_queue;

// 初始化
link_queue* init_link_queue();

// 入队
void push_link_queue(link_queue* q, elem_type value);

// 出队
elem_type pop_link_queue(link_queue* q);

// 判空
int empty_link_queue(link_queue* q);

// 打印
int print_link_queue(link_queue* q);


#endif
