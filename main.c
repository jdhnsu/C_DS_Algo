#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

int main(void)
{

    sq_list *list = init_sq_list(&list);
    list->length = 6;
    replace_sq_list(list, 2, 5);
    print_sq_list(list);
    printf("Hello World!\n");
    return 0;
}
