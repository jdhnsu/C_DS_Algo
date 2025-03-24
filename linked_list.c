#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// ��ʼ��ֵ
node* init_node(elem_type value)
{
	node* new_node = (node*)malloc(sizeof(node));
	if (new_node == NULL)
	{
		printf("error: malloc failed\n");
		return NULL;
	}
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}

// ɾ����һ���ڵ�
void delete_node(node* n)
{
	if (n->next != NULL) {
		node* temp = n->next;
		n->next = n->next->next;
		free(temp);
	}
}

// �滻�ڵ�ֵ
void replace_node(node* n, elem_type value)
{
	n->value = value;
}

// ����ڵ�
void insert_node(node* head, elem_type value)
{
	node* new_node = init_node(value);
	new_node->next = head->next->next;
	head->next = new_node;
}

// ���ʽڵ�
int get_node(node* n)
{
	return n->value;
}

// ����
address_node *find_node(node* head, elem_type value)
{
	address_node* n = (address_node*)malloc(sizeof(address_node));
	if (n == NULL) {
		printf("�ڴ����ʧ��\n");
		return NULL;
	}
	n->n = 0;
	n->p = head;
	while (head != NULL) 
	{
		if (head->value == value)
			return n;
		n->n += 1;
		head = head->next;
	}
	printf("�޷��ҵ��ڵ�\n");
	free(n);
	return NULL;
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