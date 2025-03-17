#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

sq_list* init_sq_list(sq_list *name)
{
    name = (sq_list*)malloc(sizeof(sq_list));
    memset(name, 0, sizeof(sq_list));
}

// 删除
void delete_sq_list(sq_list* list,int pos)
{
    if (pos < 0 || pos > list->length || list->length == MAX)
    {
        printf("位置错误\n");
        return;
    }
    if (pos == list->length - 1)
        list->data[pos] = 0;
    else
    {
        for (int i = pos; i < list->length - 1; i++)
            list->data[i] = list->data[i + 1];
        list->data[list->length - 1] = 0;
    }
    list->length--;
}

// 替换
void replace_sq_list(sq_list* list, int pos, int value)
{
    if (pos < 0 || pos > list->length || list->length >= MAX)
    {
        printf("位置错误\n");
        return;
    }
    if (pos > list->length && pos <= MAX)
        printf("不建议在此处插入");
    list->data[pos] = value;
}


// 插入
void insert_sq_list(sq_list* list, int pos, int value)
{
    if (pos < 0 || pos > list->length || list->length >= MAX)
    {
        printf("位置错误\n");
        return;
    }
    if (pos == MAX)
        printf("有损插入\n");
    if (pos > list->length && pos <= MAX)
        printf("不建议在此处插入");
    int i = list->length;
    int flog = i;
    for (i; i > pos; i--)
    {
        list->data[i + 1] = list->data[i];
    }
    list->data[pos] = value;
    if (flog + 1 > list->length)
        list->length++;
}




// 打印
void print_sq_list(sq_list* list)
{
    for (int i = 0; i < list->length; i++)
        printf("%d ", list->data[i]);
    printf("\n");
}