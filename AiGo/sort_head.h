#ifndef SORT_HEAD_H
#define SORT_HEAD_H
#define elem_t int 
// 简单插入排序
void insert_sort(elem_t *nums,int len);

// 冒泡排序
void bubble_sort(elem_t *nums,int len);

// 选择排序
void select_sort(elem_t *nums,int len);

// 希尔排序
void shell_sort(elem_t *nums,int len);

// 打印数组
void _print(elem_t *nums,int len);

#endif // SORT_HEAD_H