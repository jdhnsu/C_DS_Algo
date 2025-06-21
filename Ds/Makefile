# 定义编译器
CC = gcc

# 定义源文件目录
SRC_DIR = .

# 定义头文件目录
INC_DIR = .

# 定义目标文件目录
OBJ_DIR = obj

# 定义可执行文件名称
TARGET = main

# 定义源文件后缀
SRC_EXT = .c

# 定义目标文件后缀
OBJ_EXT = .o

# 定义源文件列表
SRC_FILES = \
    *.c \
    main.c

# 使用正则表达式替换源文件后缀为.o，生成目标文件列表
OBJ_FILES = $(patsubst $(SRC_DIR)/%$(SRC_EXT), $(OBJ_DIR)/%$(OBJ_EXT), $(SRC_FILES))

# 定义编译选项
CFLAGS = -I$(INC_DIR) -Wall -Wextra -pedantic

# 默认目标，调用链接规则
all: $(TARGET)

# 链接规则，将所有目标文件链接成可执行文件
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

# 编译规则，将源文件编译成目标文件
$(OBJ_DIR)/%$(OBJ_EXT): $(SRC_DIR)/%$(SRC_EXT)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理目标文件和可执行文件
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
