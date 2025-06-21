#include <stdio.h>
#include "sort_head.h"

int main(void)
{ 
    int nums[] = {1,2,3,4,5,6};
    // shell_sort(nums,6);
    // insert_sort(nums,6);
    quick_sort(nums,6,0,5);
    _print(nums,6);
    return 0;
}