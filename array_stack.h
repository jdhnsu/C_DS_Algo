#ifndef ARRAY_SATCK
#define ARRAY_SATCK
#define MAX_S 100
#define elem_type int 
typedef struct array_stack
{
	elem_type data[MAX_S];
	int top;
}array_stack;
// ��ʼջ
array_stack* init_array_stack(void);

// ��ջ
void push_array_stack(array_stack* s, elem_type value);

// ��ջ
int pop_array_stack(array_stack* s);

// ��ӡ����ջ
void print_array_stack(array_stack* s);

#endif 
