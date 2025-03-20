#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

int main(void)
{

 
 
    sq_list* L = init_sq_list();
    sq_list* N = init_sq_list();
    for (int i = 1; i <= 3; i++)
    {
        N->data[i - 1] = i;
    }
    for (int i = 1; i <= 10; i++)
    {
        L->data[i - 1] = i;
    }
    N->length = 3;
    L->length = 10;
    print_sq_list(N);
    print_sq_list(L);
    printf("----------------------------------");
    merge_sq_list(N,L);
    print_sq_list(L);
    printf("%d", L->length);
    printf("Hello World!\n");
    return 0;
}
