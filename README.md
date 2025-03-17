# 数据结构与算法练习代码
## 项目目标
  构建本学期所有数据结构和算法, 来练习代码.
## 项目结构说明
  `main.c`由于测试和调用其它`.c`文件,其它算法源文件用其英文名命名,编写被调用文件时首先在`name.h`声名结构体和函数,然后在`name.c`实现功能.
## 示例
`linked_list.h`:
  ```c
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

// 链表节点结构体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 链表操作函数声明
Node* create_node(int data);
void append_node(Node** head, int data);
bool delete_node(Node** head, int data);
void print_list(const Node* head);
void free_list(Node** head);

#endif // LINKED_LIST_H

```

`linked_list.c`:
  ```c
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// 创建新节点
Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        fprintf(stderr, "内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// 在链表末尾添加节点
void append_node(Node** head, int data) {
    Node* new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

// 删除包含指定数据的节点
bool delete_node(Node** head, int data) {
    if (*head == NULL) {
        return false;
    }
    Node* current = *head;
    Node* previous = NULL;

    // 查找要删除的节点
    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }

    // 未找到节点
    if (current == NULL) {
        return false;
    }

    // 删除节点
    if (previous == NULL) {
        // 要删除的是头节点
        *head = current->next;
    } else {
        previous->next = current->next;
    }
    free(current);
    return true;
}

// 打印链表
void print_list(const Node* head) {
    const Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 释放链表内存
void free_list(Node** head) {
    Node* current = *head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

```
`main.c`:
```c
#include <stdio.h>
#include "linked_list.h"

int main() {
    Node* head = NULL;
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    printList(head);
    deleteNode(&head, 20);
    printList(head);
    return 0;
}
```
## 补充
```c
#ifndef LINKED_LIST_H
#define LINKED_LIST_H  



#endif 
```
在 C 语言中，头文件（`.h` 文件）通常使用预处理指令 `#ifndef`、`#define` 和 `#endif` 来防止头文件被重复包含，避免编译错误。这种技术被称为 **头文件保护符** 或 **包含卫士**。

**工作原理：**

1. **`#ifndef LINKED_LIST_H`**：检查宏 `LINKED_LIST_H` 是否未被定义。
2. **`#define LINKED_LIST_H`**：如果未定义，则定义宏 `LINKED_LIST_H`。
3. **头文件内容**：包含实际的类型定义和函数声明。
4. **`#endif`**：结束条件编译。

当头文件第一次被包含时，`LINKED_LIST_H` 未被定义，编译器会处理头文件内容并定义 `LINKED_LIST_H`。如果头文件再次被包含，由于 `LINKED_LIST_H` 已被定义，`#ifndef` 条件不成立，编译器会跳过头文件内容，从而避免重复定义。

**注意事项：**

- **宏名的唯一性**：确保每个头文件的宏名唯一，通常使用头文件名的大写形式，并用下划线替代非字母数字字符。
- **`#pragma once` 指令**：一些编译器支持 `#pragma once`，它可以防止头文件被多次包含，使用起来更简洁，但并非所有编译器都支持，使用 `#ifndef` 等预处理指令具有更好的可移植性。

通过使用头文件保护符，可以有效防止头文件的重复包含，确保代码的正确编译。 