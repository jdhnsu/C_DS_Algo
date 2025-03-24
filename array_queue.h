#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
#define MAX_QUEUE 3
#define elem_type int 
// queue 构建
typedef struct array_queue
{
   elem_type data[MAX_QUEUE];
   int front; // 队列头指针
   int rear; // 队列尾指针
   int size;
}array_queue;

// queue 初始化
array_queue *inti_array_queue();

// 判空
int empty_array_queue(array_queue *q);

//判满
int full_array_queue(array_queue *q);

// 入队
void push_array_queue(array_queue *q, elem_type value);

// 出队
elem_type pop_array_queue(array_queue *q);

// 打印队列
void print_array_queue(array_queue *q);



#endif