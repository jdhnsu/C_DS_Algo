# 编译器和编译选项
CC = gcc
CFLAGS = -O2 -w

# 自动扫描当前目录下的所有 .c 和 .h 文件
SRCS = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS = $(patsubst %.c, build/%.o, $(SRCS))

# 目标文件
TARGET = build/main

# 默认目标
all: build $(TARGET)

# 创建 build 文件夹
build:
	if not exist build mkdir build

# 链接目标
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# 编译规则
build/%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理目标
clean:
	if exist build rmdir /S /Q build

# 伪目标
.PHONY: all clean build