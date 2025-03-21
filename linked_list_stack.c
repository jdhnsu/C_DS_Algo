#include <stdio.h>
#include <stdlib.h>
#include "linked_list_stack.h"

// ³õÊ¼Õ»
stack_linked* init_stack_linked(void)
{
	stack_linked* s = (stack_linked*)malloc(sizeof(stack_linked));
	s->top = NULL;
	s->size = 0;
	return s;
}

// ÈëÕ»
void push_stack_linked(stack_linked* s, elem_type value)
{
	stack_node* node = (stack_node*)malloc(sizeof(stack_node));
	node->value = value;
	node->next = s->top;
	s->top = node;
	s->size++;
}

// ³öÕ»
int pop_stack_linked(stack_linked* s)
{ 
	int flog = 0;
	flog = s->top->value;
	stack_node* tmp = s->top;
	s->top = s->top->next;
	free(tmp);
	tmp = NULL;
	return flog;
}