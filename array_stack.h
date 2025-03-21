#ifndef ARRAY_SATCK
#define ARRAY_SATCK
#define MAX_S 100
#define elem_type int 
typedef struct array_stack
{
	elem_type data[MAX_S];
	int top;
}array_stack;
// 初始栈
array_stack* init_array_stack(void);

// 入栈
void push_array_stack(array_stack* s, elem_type value);

// 出栈
int pop_array_stack(array_stack* s);

// 打印数组栈
void print_array_stack(array_stack* s);

#endif 
