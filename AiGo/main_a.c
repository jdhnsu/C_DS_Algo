#include <stdio.h>
#include "sort_head.h"

int main(void)
{ 
    int nums[] = {6,5,4,3,2,1};
    // shell_sort(nums,6);
    insert_sort(nums,6);
    _print(nums,6);
    return 0;
}