#include <stdio.h>
#include <stdlib.h>
#include "array_stack.h"

// 初始化栈
array_stack* init_array_stack(void)
{
    array_stack* new_stack = (array_stack*)malloc(sizeof(array_stack));
    if (new_stack == NULL) {
        printf("内存分配失败[来自init_array_stack()]\n");
        return NULL;
    }
    memset(new_stack, 0, sizeof(array_stack));
    new_stack->top = -1;
    return new_stack;
}

// 入栈
void push_array_stack(array_stack* stack, elem_type value)
{
    if (stack->top + 1 > MAX_S)
    {
        printf("栈已满[来自push_array_stack()]\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = value;
}

// 出栈
int pop_array_stack(array_stack* stack)
{
    if (stack->top == -1)
    {
        printf("栈为空[来自pop_array_stack()]\n");
        return -1;
    }
    int value = stack->data[stack->top];
    stack->top--;
    return value;
}

// 打印数组栈
void print_array_stack(array_stack* stack)
{
    if (stack->top == -1)
    {
        printf("栈为空[来自print_array_stack()]\n");
        return;
    }
    printf("栈顶元素: %d\n", stack->data[stack->top]);
    printf("-----\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("| %d |\n", stack->data[i]);
    }
    printf("-----\n");
}