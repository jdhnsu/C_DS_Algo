#include <stdio.h>
#include "sort_head.h"

int main(void)
{ 
    int nums[] = {1,2,3,4,5,6};
    int nums_2[] = {7,5,4,3,2,1};
    // shell_sort(nums,6);
    // insert_sort(nums,6);
    quick_sort(nums_2,6,0,5);
    _print(nums_2,6);
    return 0;
}