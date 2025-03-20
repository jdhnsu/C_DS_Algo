#ifndef SQ_LIST_H
#define SQ_LIST_H
#define MAX 100


typedef struct sq_list
{
    int data[MAX];
    int length;
} sq_list;

// ��ʼ��
sq_list *init_sq_list(void);

// ɾ��
void delete_sq_list(sq_list* list, int pos);

// �滻
void replace_sq_list(sq_list* list, int pos, int value);

// ����
void insert_sq_list(sq_list* list, int pos, int value);

// ��ӡ
void print_sq_list(sq_list* list);

//���Ԫ��
void get_sq_list(sq_list* list1,int pos, int *e);

//����
int locate_list(sq_list* list, int e);

// �ϲ�˳���1.0
void merge_sq_list(sq_list* list_1, sq_list* list_2);

//�ϲ�˳���2.0
void mer_ge_sq_list(sq_list* list_1, sq_list* list_2);
#endif

