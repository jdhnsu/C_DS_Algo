#ifndef SQ_LIST_H
#define SQ_LIST_H
#define MAX 100

typedef struct sq_list
{
    int data[MAX];
    int length;
} sq_list;

// ³õÊ¼»¯
sq_list* init_sq_list(sq_list* name);

// É¾³ı
void delete_sq_list(sq_list* list);

// Ìæ»»
void replace_sq_list(sq_list* list, int pos, int value);

// ²åÈë
void insert_sq_list(sq_list* list, int pos, int value);

// ´òÓ¡
void print_sq_list(sq_list* list);

#endif

