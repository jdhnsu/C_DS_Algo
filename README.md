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

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void insertNode(Node** head, int data);
void deleteNode(Node** head, int data);
void printList(Node* head);

#endif
```

`linked_list.c`:
  ```c
  #include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void deleteNode(Node** head, int data) {
    Node* temp = *head, *prev = NULL;
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    if (prev) prev->next = temp->next;
    else *head = temp->next;
    free(temp);
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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