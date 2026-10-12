CC = gcc
CFLAGS = -g -Wall
TARGET = task

all: $(TARGET)

$(TARGET): task.c
	$(CC) $(CFLAGS) -o $(TARGET) task.c

valgrind: $(TARGET)
	valgrind --leak-check=full ./$(TARGET)

clean:
	rm -f $(TARGET)
.PHONY: all valgrind clean
