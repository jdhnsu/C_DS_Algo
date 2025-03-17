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
	n->value = val;
}

// 插入节点
void insert_node(node* head, int val)
{
	node* new_node = init_node(val);
	new_node->next = head->next->next;
	head->next = new_node;
}

// 访问节点

int get_node(node* n)
{
	return n->value;
}

// 查找
address_node *find_node(node* head, int val)
{
	address_node* n = (address_node*)malloc(sizeof(address_node));
	n->n = 0;
	n->p = head;
	while(1) 
	{
		if (head->value == val)
			return n;
		n->n += 1;
		head = head->next;
	}
	printf("无法找到节点\n");
	return -1;
}

// 打印链表
void print_node_list(node* head)
{
	while (head->next != NULL)
		{
		   head = head->next;
		   printf("%d ", head->value);
		}
}