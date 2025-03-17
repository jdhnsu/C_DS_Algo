#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



// 初始赋值
node* init_node(int val)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->value = val;
	new_node->next = NULL;
	return new_node;
}


// 删除下一个节点
void delete_node(node* n)
{
  n->next = n->next->next;
  free(n->next);
}

// 替换节点值
void replace_node(node* n, int val)
{
     
}
