#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



// ��ʼ��ֵ
node* init_node(int val)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->value = val;
	new_node->next = NULL;
	return new_node;
}


// ɾ����һ���ڵ�
void delete_node(node* n)
{
  n->next = n->next->next;
  free(n->next);
}

// �滻�ڵ�ֵ
void replace_node(node* n, int val)
{
     
}
