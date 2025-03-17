#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int value;
    struct node* next;
} node;

// 初始化节点
node* init_node(int val);

// 删除下一个节点
void delete_node(node* n);

// 替换节点
void replace_node (node* n, int val);

// 插入节点
void insert_node(node** head, int val);

//访问节点
int get_node(node* n);

// 查找
int find_node(node* head, int val);



#endif 

