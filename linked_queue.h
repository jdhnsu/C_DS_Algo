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

// ��ʼ��
link_queue* init_link_queue();

// ���
void push_link_queue(link_queue* q, elem_type value);

// ����
elem_type pop_link_queue(link_queue* q);

// �п�
int empty_link_queue(link_queue* q);

// ��ӡ
int print_link_queue(link_queue* q);


#endif
