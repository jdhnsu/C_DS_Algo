#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

typedef struct stack_node
{
	int value;
	struct stack_node *next;

}stack_node;

typedef struct stack_linked
{
	  stack_node *top;
	  int size;
}stack_linked;

// ��ʼջ
stack_linked* init_stack_linked(void);

// ��ջ
void push_stack_linked(stack_linked* s, int value);

// ��ջ
int pop_stack_linked(stack_linked* s);


















#endif 
