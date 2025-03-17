#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

sq_list* init_sq_list(sq_list* name)
{
    name = (sq_list*)malloc(sizeof(sq_list));
    memset(name, 0, sizeof(sq_list));
    return name;
}
