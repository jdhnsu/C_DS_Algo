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
void insert_node(node* head,node *new_node)
{
	new_node->next = head->next;
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
	n->n = 1;
	n->p = head->next;
	node *temp = head;
	while (temp->next != NULL) 
	{
		if (temp->value == value)
			return n;
		n->n += 1;
		temp = temp->next;
		n->p = temp;
	}
	printf("�޷��ҵ��ڵ�\n");
	free(n);
	return NULL;
}

// ��ӡ����
void print_node_list(node* head)
{
	node* head_1 = head;
	//printf("[%d ",head_1->value);
	printf("[");
	while (1)
	{
		printf("%d ", head_1->value);
		head_1 = head_1->next;
		if (head_1 == NULL)
			break;
	}
	printf("]\n");
}

// ���������
int get_node_list(node* head)
{
	node *head_1 = head;
	int i = 1;
	while (head_1->next != NULL)
	{
		head_1 = head_1->next;
		i++;
	}
	printf("������Ϊ%d\n", i);
	return i;
}


// ���Ԫ��
elem_type get_node_value(node* head,int pos)
{
	node* head_1 = head;
	int i = 1;
	while (i < pos && head_1)
	{
		head_1 = head_1->next;
		i++;
	}
	if (head_1 == NULL || i != pos)
		return;
	return head_1->value;
}