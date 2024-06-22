# 指定编译器
CC = gcc

# 源文件目录
SRC_DIR = .
# 目标可执行文件
TARGET = app

# 所有的源文件
SRCS = $(wildcard $(SRC_DIR)/*.c)
# 所有的目标文件
OBJS = $(SRCS:.c=.o)

# 编译规则
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

	# 生成目标文件
%.o: %.c
	$(CC) -c -o $@ $<

		# 清理规则
clean:
	rm -f $(OBJS)

