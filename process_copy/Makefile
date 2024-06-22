# 指定编译器
CC = gcc

# 源文件目录
SRC_DIR = Mod
# 目标可执行文件
TARGET = copy

# 编译规则
$(TARGET): $(SRC_DIR)/copy.c
	$(CC) -o $@ $^

# 清理规则
clean:
	rm -f $(TARGET)

