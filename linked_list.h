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


// 初始化节点
node* init_node(elem_type value);

// 删除下一个节点
void delete_node(node* n);

// 替换节点
void replace_node (node* n, elem_type value);

// 插入节点
void insert_node(node* head, elem_type value);

//访问节点
int get_node(node* n);

// 查找
address_node *find_node(node* head, elem_type value);

// 打印链表
void print_node_list(node* head);

#endif 

