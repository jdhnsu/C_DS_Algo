#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list_stack.h"

int main(void)
{

 
 
    //sq_list* L = init_sq_list();
    //sq_list* N = init_sq_list();
    //for (int i = 1; i <= 3; i++)
    //{
    //    N->data[i - 1] = i+10;
    //}
    //for (int i = 1; i <= 10; i++)
    //{
    //    L->data[i - 1] = i;
    //}
    //N->length = 3;
    //L->length = 10;
    //print_sq_list(N);
    //print_sq_list(L);
    //mer_ge_sq_list(L,N);
    //print_sq_list(L);
    //printf("L->length:[%d]\n", L->length);
    stack_linked* head = init_stack_linked();
    push_stack_linked(head, 1);
    push_stack_linked(head, 2);
    push_stack_linked(head, 3);
    print_linked(head);
    pop_stack_linked(head);
    print_linked(head);
    printf("Hello World!\n");
    system("pause");
    return 0;
}
