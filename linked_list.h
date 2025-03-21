#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#define elem_type int

typedef struct node
{
     elem_type value;
    struct node* next;
} node;

typedef struct address_node
{
    int n;
    node* p;
}address_node;


// ��ʼ���ڵ�
node* init_node(elem_type value);

// ɾ����һ���ڵ�
void delete_node(node* n);

// �滻�ڵ�
void replace_node (node* n, elem_type value);

// ����ڵ�
void insert_node(node* head, elem_type value);

//���ʽڵ�
int get_node(node* n);

// ����
address_node *find_node(node* head, elem_type value);

// ��ӡ����
void print_node_list(node* head);

#endif 

