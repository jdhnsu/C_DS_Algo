#ifndef SQ_LIST_H
#define SQ_LIST_H
#define MAX 100

typedef struct sq_list
{
    int data[MAX];
    int length;
} sq_list;

// 初始化
sq_list *init_sq_list(void);

// 删除
void delete_sq_list(sq_list* list, int pos);

// 替换
void replace_sq_list(sq_list* list, int pos, int value);

// 插入
void insert_sq_list(sq_list* list, int pos, int value);

// 打印
void print_sq_list(sq_list* list);

#endif

