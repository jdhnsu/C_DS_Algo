#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_tree.h"

tree_node *init_binary_tree(elem_type value)
{ 
    tree_node *node = (tree_node *)malloc(sizeof(tree_node));
    if (node == NULL)
    {
        printf("error: malloc failed from:init_binary_tree\n");
    }
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
 
// 插入节点
void insert_tree_node(tree_node *node,tree_node *node_new)
{
   if (node == NULL)
     {
        node ->left = node_new;
        return;
     }
    tree_node *temp = node;
    node ->left = node_new;
     
}
// 删除节点

// 遍历树节点 bfs
void traverse_tree(tree_node *roots)
{
    tree_node *queue[3] = {NULL,NULL,NULL};
    int front = 0;
    int rear = 0;
    if (roots == NULL)
    {
        printf("error: roots is NULL\n");
        return;
    }
    printf("%d\n", roots->value);
    while(roots ->left !=  NULL && roots -> right != NULL)
    {
      tree_node *temp[2] = {roots->left,roots->right};
      for (int i = 0;i<2;i++)
        {
            if (temp[i] != NULL)
            {
             queue[rear] = temp[i];
             rear = (rear + 1) % 3;
            printf("%d ",temp[i]->value);
            }
        }
       printf("\n");
       roots = queue[front];
       front = (front+1) % 3;
    }
}