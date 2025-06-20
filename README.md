# 数据结构与算法练习代码

## 项目目标

本项目旨在通过C语言实现本学期所学的所有数据结构和算法，以提升编码能力、加深对数据结构和算法的理解，并培养良好的编程习惯。通过实际编写代码，我们将逐步构建一个完整的数据结构与算法库，为后续的软件开发和学习打下坚实的基础。

## 项目结构说明

项目采用模块化设计，每个数据结构或算法模块都独立封装，便于管理和复用。具体结构如下：

- **`main.c`**：主程序文件，用于测试和调用其他模块的功能。它是整个项目的入口，通过它来运行和验证各个数据结构和算法模块的实现。
- **算法源文件**：每个数据结构或算法模块都有一个独立的源文件，文件名以其实现的功能的英文名命名，例如`linked_list.c`用于实现链表，`stack.c`用于实现栈等。这种命名方式直观且易于理解，方便开发者快速定位和使用相关模块。
- **头文件**：每个模块的头文件（如`linked_list.h`、`stack.h`等）用于声明该模块中定义的结构体和函数。头文件是模块对外的接口，它定义了模块可以被外部调用的函数和数据结构，隐藏了具体的实现细节，符合模块化设计的原则，同时也便于其他模块的引用和调用。

在编写被调用模块的代码时，首先需要在对应的头文件中声明结构体和函数，明确模块的接口；然后在对应的源文件中实现这些函数的功能。这种分离接口和实现的方式，不仅有助于代码的组织和管理，还便于后续的维护和扩展。例如，如果需要修改某个模块的内部实现，只需修改其源文件，而无需修改头文件和主程序文件，只要保持接口不变，不会影响其他模块的正常调用。

## 示例代码

以下是一个简单的示例，展示如何组织代码和实现功能。

### 简化示例代码

以下是一个简单的“Hello, World!”示例，展示如何在项目中添加一个新的模块。

#### `hello_world.h`

```c
#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

void print_hello_world();

#endif // HELLO_WORLD_H
```

#### `hello_world.c`

```c
#include "hello_world.h"
#include <stdio.h>

void print_hello_world() {
    printf("Hello, World!\n");
}
```

#### 在`main.c`中调用

```c
#include "hello_world.h"

int main() {
    print_hello_world();
    return 0;
}
```

## 知识补充

### 头文件保护符

在C语言中，头文件（`.h`文件）通常使用预处理指令`#ifndef`、`#define`和`#endif`来防止头文件被重复包含，避免编译错误。这种技术被称为**头文件保护符**或**包含卫士**。

**工作原理：**

1. **`#ifndef LINKED_LIST_H`**：检查宏`LINKED_LIST_H`是否未被定义。
2. **`#define LINKED_LIST_H`**：如果未定义，则定义宏`LINKED_LIST_H`。
3. **头文件内容**：包含实际的类型定义和函数声明。
4. **`#endif`**：结束条件编译。

当头文件第一次被包含时，`LINKED_LIST_H`未被定义，编译器会处理头文件内容并定义`LINKED_LIST_H`。如果头文件再次被包含，由于`LINKED_LIST_H`已被定义，`#ifndef`条件不成立，编译器会跳过头文件内容，从而避免重复定义。

**注意事项：**

- **宏名的唯一性**：确保每个头文件的宏名唯一，通常使用头文件名的大写形式，并用下划线替代非字母数字字符。
- **`#pragma once`指令**：一些编译器支持`#pragma once`，它可以防止头文件被多次包含，使用起来更简洁，但并非所有编译器都支持，使用`#ifndef`等预处理指令具有更好的可移植性。

通过使用头文件保护符，可以有效防止头文件的重复包含，确保代码的正确编译。

### 命名规范

为了保持代码的一致性和可读性，本项目统一使用**小写下划线命名法**。例如，变量名和函数名使用`variable_name`和`function_name`的形式，宏定义使用`MACRO_NAME`的形式。

## 如何参与项目

### 1. 克隆项目

#### 方式1：直接克隆

```bash
git clone https://github.com/jdhnsu/C_DS_Algo.git
cd C_DS_Algo
```

#### 方式2（推荐）：

使用`GitHub Desktop`客户端克隆项目，并在本地创建分支。

- [GitHub Desktop 下载](https://desktop.github.com/download/)
- [GitHub Desktop 汉化工具](https://github.com/robotze/GithubDesktopZhTool) （记得给项目点个赞！）

### 2. 添加新的数据结构或算法模块

- 工具说明:默认使用 *Visual Studio 2022 IDE*,克隆项目后，点击项目文件`Project2.sln`就可以开始编辑了。如果使用其它方式推荐使用`CMake`工具编译项目。
- 创建一个新的头文件（如`new_module.h`）和源文件（如`new_module.c`）。
- 在头文件中声明结构体和函数接口。
- 在源文件中实现这些函数的功能。
- 在`main.c`中调用新模块的功能，验证其正确性。

### 3. 提交代码

- 提交你的代码到你的分支。
- 创建一个Pull Request，详细描述你的更改和新增功能。

### 4. 提出建议或问题

如果你有任何建议或遇到问题，欢迎在[Issues](https://github.com/jdhnsu/C_DS_Algo/issues)中提出,[wiki](https://github.com/jdhnsu/C_DS_Algo/wiki) 中也有许多代码讲解可以查看.

## 示例：添加一个新的模块

假设我们要添加一个栈模块，以下是步骤：

1. **创建头文件`stack.h`**

   ```c
   #ifndef STACK_H
   #define STACK_H

   typedef struct Stack {
       int* elements;
       int capacity;
       int top;
   } Stack;

   Stack* create_stack(int capacity);
   void push(Stack* stack, int element);
   int pop(Stack* stack);
   bool is_empty(Stack* stack);
   void free_stack(Stack* stack);

   #endif // STACK_H
   ```
2. **创建源文件`stack.c`**

   ```c
   #include "stack.h"
   #include <stdlib.h>
   #include <stdio.h>

   Stack* create_stack(int capacity) {
       Stack* stack = (Stack*)malloc(sizeof(Stack));
       stack->elements = (int*)malloc(capacity * sizeof(int));
       stack->capacity = capacity;
       stack->top = -1;
       return stack;
   }

   void push(Stack* stack, int element) {
       if (stack->top == stack->capacity - 1) {
           fprintf(stderr, "栈满，无法压入元素\n");
           return;
       }
       stack->elements[++stack->top] = element;
   }

   int pop(Stack* stack) {
       if (stack->top == -1) {
           fprintf(stderr, "栈空，无法弹出元素\n");
           return -1;
       }
       return stack->elements[stack->top--];
   }

   bool is_empty(Stack* stack) {
       return stack->top == -1;
   }

   void free_stack(Stack* stack) {
       free(stack->elements);
       free(stack);
   }
   ```
3. **在`main.c`中调用栈模块**

   ```c
   #include "stack.h"

   int main() {
       Stack* stack = create_stack(10);
       push(stack, 10);
       push(stack, 20);
       printf("栈顶元素：%d\n", pop(stack));
       free_stack(stack);
       return 0;
   }
   ```
4. **提交代码**

   - 提交你的`stack.h`和`stack.c`文件。
   - 在`main.c`中验证栈模块的功能。（无需提交`main.c`文件）
   - 提交时记得详细说明你的更改。

## 文件结构

```
C_DS_Algo/
├── (一些日志文件和git配置(忽略))
├── README.md
├── linked_list.h
├── linked_list.c
└── main.c
```
