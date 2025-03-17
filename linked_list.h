#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int value;
    struct node* next;
} node;

// ��ʼ���ڵ�
node* init_node(int val);

// ɾ����һ���ڵ�
void delete_node(node* n);

// �滻�ڵ�
void replace_node (node* n, int val);

// ����ڵ�
void insert_node(node** head, int val);

//���ʽڵ�
int get_node(node* n);

// ����
int find_node(node* head, int val);



#endif 

