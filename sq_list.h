#ifndef SQ_LIST_H
#define SQ_LIST_H
#define MAX 100

typedef struct sq_list
{
    int data[MAX];
    int length;
} sq_list;

// ��ʼ��
sq_list* init_sq_list(sq_list* name);

// ɾ��
void delete_sq_list(sq_list* list);

// �滻
void replace_sq_list(sq_list* list, int pos, int value);

// ����
void insert_sq_list(sq_list* list, int pos, int value);

// ��ӡ
void print_sq_list(sq_list* list);

#endif

