#ifndef HEAP_H
#define HEAP_H
#define MAX_S 256
#define elem_t int
typedef struct heap {
  elem_t data[MAX_S];
  int size;
}heap;
void heap_swap(heap *tree,int x,int y);
int heap_get_left(heap *tree,int i);
int heap_get_right(heap *tree,int i);
int heap_get_parent(heap *tree,int i);
heap* heap_init();
void heap_push(heap *tree,elem_t val);
elem_t heap_pop(heap *tree);
void heap_print(heap *tree,int root);
#endif 