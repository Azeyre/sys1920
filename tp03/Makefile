CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
HDRS = $(wildcard *.h)
OBJS = $(SRCS:%.c=%.o)
TARGET = $(shell basename $(shell pwd))
.PHONY: clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
