#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

sq_list* init_sq_list(void)
{
   sq_list* name = (sq_list*)malloc(sizeof(sq_list));
    memset(name, 0, sizeof(sq_list));
    return name;
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
    int i = list->length -1;
    int flog = i;
    for (i; i >= pos-1; i--)
    {
        list->data[i + 1] = list->data[i];
    }
    list->data[pos] = value;
   /* if (flog + 1 > list->length)*/
        list->length++;
}




// 打印
void print_sq_list(sq_list* list)
{
    for (int i = 0; i < list->length; i++)
        printf("%d ", list->data[i]);
    printf("\n");
}

//获得元素
void get_sq_list(sq_list* list1, int pos, int*e)
{
    if (list1->length == 0 || pos<0 || pos>list1->length)
    {
        printf("获取元素失败");
        return;
     }
    *e = list1->data[pos];
    return;
}

//查找
int locate_list(sq_list* list, int *e)
{
    int i = 0;
    if (list->length == 0)
    {
        printf("表长为空");
        return;
    }
    for (i = 0;i < list->length;i++)
    {
        if (list->data[i] == e)
            return 1;
    }
    if (i > list->length)
    {
        printf("越界错误");
        return;
    }
    return 0;
        
}



// 2 到 1
void merge_sq_list(sq_list* list_1, sq_list* list_2)
{
    if (list_1->length == 0 || list_2->length == 0)
    {
        printf("有一个空表\n");
        return;
    }
    if ((list_1->length + list_2->length) > MAX)
        printf("总和超范围\n但是会继续合并只不过可能为有损合并\n");
    int flog = 0;
    for (int i = 0; i < list_2->length; i++)
    {
        
        for (int j = 0; j < list_1->length; j++) 
        {
            if (list_1->data[j] != list_2->data[i])
                continue;
            else if (list_1->data[j] == list_2->data[i])
            {
                flog++; break;
            }
            else
            {
                list_1->data[list_1->length] = list_2->data[i];
                list_1->length++;
            }
        }
        
    }
    printf("有%d相同 有%d不相同\n", flog, list_2->length - flog);
}

//if (list_1->data[j] != list_2->data[i])
//continue;
//else if (list_1->data[j] == list_2->data[i])
//break;

//合并2.0
void mer_ge_sq_list(sq_list* list_1, sq_list* list_2)
{
    int e;
    int k = 0;
    for (int k=0;k < list_2->length;k++)
    {
        get_sq_list(list_2, k, &e);
        if (!locate_list(list_1, list_2))
            insert_sq_list(list_1, list_1->length, e);
    }
}

