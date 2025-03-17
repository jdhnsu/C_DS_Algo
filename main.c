#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

int main(void)
{

    sq_list *list = init_sq_list(&list);
    for (int i = 0; i < 5; i++) {
        list->data[i] = i;
    }
    list->length = 6;
    insert_sq_list(list, 3, 666);
    print_sq_list(list);
    printf("Hello World!\n");
    return 0;
}
