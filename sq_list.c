#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_list.h"

sq_list* init_sq_list(void)
{
   sq_list* name = (sq_list*)malloc(sizeof(sq_list));
    if (name == NULL)
    {
        printf("error: malloc failed![From init_sq_list]\n");
        return NULL;
    }
    memset(name, 0, sizeof(sq_list));
    return name;
}

// ɾ��
void delete_sq_list(sq_list* list,int pos)
{
    if (pos < 0 || pos > list->length || list->length == MAX)
    {
        printf("λ�ô���\n");
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

// �滻
void replace_sq_list(sq_list* list, int pos, elem_type value)
{
    if (pos < 0 || pos > list->length || list->length >= MAX)
    {
        printf("λ�ô���\n");
        return;
    }
    if (pos > list->length && pos <= MAX)
        printf("�������ڴ˴�����");
    list->data[pos] = value;
}


// ����
void insert_sq_list(sq_list* list, int pos, elem_type value)
{
    if (pos < 0 || pos > list->length || list->length >= MAX)
    {
        printf("λ�ô���\n");
        return;
    }
    if (pos == MAX)
        printf("�������\n");
    if (pos > list->length && pos <= MAX)
        printf("�������ڴ˴�����");
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




// ��ӡ
void print_sq_list(sq_list* list)
{
    printf("[");
    for (int i = 0; i < list->length; i++)
        printf("%d ", list->data[i]);
    printf("]");
    printf("\n");
}

//���Ԫ��
void get_sq_list(sq_list* list1, int pos, elem_type*e)
{
    if (list1->length == 0 || pos<0 || pos>list1->length)
    {
        printf("��ȡԪ��ʧ��");
        return;
     }
    *e = list1->data[pos];
    return;
}

//����
int locate_list(sq_list* list, elem_type e)
{
    int i = 0;
    if (list->length == 0)
    {
        printf("��Ϊ��");
        return;
    }
    for (i = 0;i < list->length;i++)
    {
        if (list->data[i] == e)
            return 1;
    }
    if (i > list->length)
    {
        printf("Խ�����");
        return;
    }
    return 0;
        
}



// 2 �� 1   �ϲ�
void merge_sq_list(sq_list* list_1, sq_list* list_2)
{
    if (list_1->length == 0 || list_2->length == 0)
    {
        printf("������һ���ձ�\n");
        return;
    }
    if ((list_1->length + list_2->length) > MAX)
        printf("�ܺͳ���Χ\n���ǻ�����ϲ�ֻ��������Ϊ����ϲ�\n");
    int flog = 0;
    for (int i = 0; i < list_2->length; i++)
    {
        
        for (int j = 0; j < list_1->length; j++)
        {
            if (list_1->data[j] != list_2->data[i])
            {
                if (j == list_1->length -1)
                {
                    list_1->data[list_1->length] = list_2->data[i];
                    list_1->length++;
                    flog++;
                }
                else
                    continue;
            }
        }
        
    }
    printf("----------------------------------\n");
    printf("��%d����ͬ ��%d��ͬ\n", flog, list_2->length - flog);
    printf("----------------------------------\n");
}



//�ϲ�2.0
void mer_ge_sq_list(sq_list* list_1, sq_list* list_2)
{
    int e;
    int k = 0;
    int flog = 0;
    for (int k=0;k < list_2->length;k++)
    {
        get_sq_list(list_2, k, &e);
        if (!locate_list(list_1, list_2))
        {
            insert_sq_list(list_1, list_1->length, e);
            flog++;
        } 
    }
    printf("----------------------------------\n");
    printf("��%d����ͬ ��%d��ͬ\n", flog, list_2->length - flog);
    printf("----------------------------------\n");
}

