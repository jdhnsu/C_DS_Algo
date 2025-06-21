#include <stdio.h>
#include "sort_head.h"

void swap(elem_t *x,elem_t *y)
{
    elem_t twep = *x;
    *x = *y;
    *y = twep;
}

void _print(elem_t *nums,int len)
{
    int t = sizeof(nums[0]);
    for (int i=0;i<len;i++)
    {
        printf("%d",nums[i]);
    }
}

void insert_sort(elem_t *nums,int len)
{
    int j,i;
    int cont = 0;
    for (i=0;i<len;i++)
    {
        if (nums[i]>nums[i+1])
        {
            cont = nums[i+1];
            nums[i+1] = nums[i];
            for (j=i-1;j>=0&&cont < nums[j];j--)
            {
                nums[j+1] = nums[j];
            }
            nums[j+1] = cont;
        }
    }
}

void select_sort(elem_t *nums,int len)
{
    int min_index = 0;
    for (int i=0;i<len;i++)
    {
       for (int j=i;j<len;j++)
       {
        if (nums[j]>min_index)
        {
            min_index = j;
        }
       }
       if (min_index != i)
       {
        swap(&nums[i],&nums[min_index]);
       }
    }
}

void bubble_sort(elem_t *nums,int len)
{
    int flog = 0;
    for (int i=0;i<len&&flog==0;i++)
    {
        for (int j=len-1;j>i;j--)
        {
            flog = 1;
            if (nums[j]<nums[j-1])
            {
                swap(&nums[j],&nums[j-1]);
                flog = 0;
            }
        }
    }
}

void shell_sort(elem_t *nums,int len)
{
    int gap[3] = {6,3,1};
    for (int k=0;k<3;k++)
    {
        int j,i;
        int cont = 0;
        for (i=0;i<len;i+=gap[k])
        {
            if (i+gap[k]<len&&nums[i]>nums[i+gap[k]])
            {
                cont = nums[i+gap[k]];
                nums[i+gap[k]] = nums[i];
                for (j=i-gap[k];j>=0&&cont < nums[j];j-=gap[k])
                {
                    nums[j+gap[k]] = nums[j];
                }
                nums[j+gap[k]] = cont;
            }
        }
    }
}
// pivot
void quick_sort(elem_t *nums,int len,int index_l,int index_r)
{
    if (index_l >= index_r)
        return;
    int index_p = partition(nums,len,index_l,index_r);
    quick_sort(nums,len,index_l,index_p-1);
    quick_sort(nums,len,index_p+1,index_r);
}
int partition(elem_t *nums, int len, int index_l, int index_r)
{
    elem_t pivot = nums[index_l];
    int left = index_l;
    int right = index_r;
    while (left < right) {
        while (left < right && nums[right] >= pivot) right--;
        nums[left] = nums[right];
        while (left < right && nums[left] <= pivot) left++;
        nums[right] = nums[left];
    }
    nums[left] = pivot;
    return left;
}