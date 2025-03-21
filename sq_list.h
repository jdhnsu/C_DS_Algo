#ifndef SQ_LIST_H
#define SQ_LIST_H
#define MAX 100
#define elem_type int


typedef struct sq_list
{
    elem_type data[MAX];
    int length;
} sq_list;

// 初始化
sq_list *init_sq_list(void);

// 删除
void delete_sq_list(sq_list* list, int pos);

// 替换
void replace_sq_list(sq_list* list, int pos, elem_type value);

// 插入
void insert_sq_list(sq_list* list, int pos, elem_type value);

// 打印
void print_sq_list(sq_list* list);

//获得元素
void get_sq_list(sq_list* list1,int pos, elem_type *e);

//查找
int locate_list(sq_list* list, elem_type e);

// 合并顺序表1.0
void merge_sq_list(sq_list* list_1, sq_list* list_2);

//合并顺序表2.0
void mer_ge_sq_list(sq_list* list_1, sq_list* list_2);
#endif

