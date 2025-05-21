#ifndef BINARY_TREE
#define BINARY_TREE
#define elem_type int 
typedef struct tree_node 
{
  elem_type value;
  struct tree_node *left;
  struct tree_node *right;
}tree_node;
// 初始化树节点
tree_node *init_binary_tree(elem_type value);
// 插入节点
void insert_tree_node(tree_node *node,tree_node *node_new);
// 删除节点
void delete_node(tree_node *node);
// 遍历树节点
void traverse_tree(tree_node *roots);
void traverse_tree_dfs(tree_node *roots);
#endif // DEBUG
