#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "heap.h"

void heap_swap(heap *tree,int x,int y)
{
    elem_t tt = tree->data[x];
    tree->data[x] = tree->data[y];
    tree->data[y] = tt;
}

heap* heap_init()
{
    heap *tree = (heap *)malloc(sizeof(heap));
    memset(tree,0,sizeof(heap));
    return tree;
}

int heap_get_right(heap *tree,int i)
{
    return 2 * i + 2;
}

int heap_get_left(heap *tree,int i)
{
   return 2 * i + 1;
}


int heap_get_parent(heap *tree,int i)
{
    return (i - 1)/2;
}

void heap_push(heap *tree,int val)
{
    if (tree->size == MAX_S-1)
        {
            printf("heap is full\n");
            return;
        }
    tree->data[tree->size] = val;
    int flog_i = tree->size;
    while(1)
    {
       int flog_p = heap_get_parent(tree,flog_i);
       if (tree->data[flog_i] <= tree->data[flog_p] || flog_p<0)
       {
        break;
       }
       heap_swap(tree,flog_i,flog_p);
       flog_i = flog_p;
    }
    tree->size++;
}


void heap_print(heap* tree,int root)
{
    if (tree->size <= 0) return;
    
    int* queue = (int*)malloc(tree->size * sizeof(int));
    int front = 0;
    int rear = 1;
    int count = 1;
    queue[0] = root;
    printf("[%d]\n", tree->data[root]);

    while (front < rear && count < tree->size)
    {
        int level_size = rear - front;
        for (int i = 0; i < level_size && count < tree->size; i++)
        {
            int current = queue[front++];
            int left = heap_get_left(tree, current);
            int right = heap_get_right(tree, current);

            if (left < tree->size) {
                printf("[%d]", tree->data[left]);
                queue[rear++] = left;
                count++;
            }
            if (right < tree->size) {
                printf("[%d]", tree->data[right]);
                queue[rear++] = right;
                count++;
            }
        }
        printf("\n");
    }
    free(queue);
}
 