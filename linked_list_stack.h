#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H
#define elem_type int

typedef struct stack_node
{
	elem_type value;
	struct stack_node *next;

}stack_node;

typedef struct stack_linked
{
	  stack_node *top;
	  int size;
}stack_linked;

// 初始栈
stack_linked* init_stack_linked(void);

// 入栈
void push_stack_linked(stack_linked* s, elem_type value);

// 出栈
int pop_stack_linked(stack_linked* s);
//输出
void print_linked(stack_linked* s);


















#endif 
