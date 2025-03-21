#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_stack.h"
#include "sq_list.h"

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


    // Õ»²âÊÔ
    array_stack* stack = init_array_stack();
    push_array_stack(stack, 1);
    push_array_stack(stack, 2);
    push_array_stack(stack, 3);
    print_array_stack(stack);
    printf("Hello World!\n");
    system("pause");
    return 0;
}
