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
	n->value = val;
}

// ����ڵ�
void insert_node(node* head, int val)
{
	node* new_node = init_node(val);
	new_node->next = head->next->next;
	head->next = new_node;
}

// ���ʽڵ�

int get_node(node* n)
{
	return n->value;
}

// ����
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
	printf("�޷��ҵ��ڵ�\n");
	return -1;
}

// ��ӡ����
void print_node_list(node* head)
{
	while (head->next != NULL)
		{
		   head = head->next;
		   printf("%d ", head->value);
		}
}