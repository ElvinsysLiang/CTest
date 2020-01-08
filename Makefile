C = gcc
CFLAGS = -Wall -O -g -o #编译链接-o
SRCS =$(wildcard *.c)
OBJS =$(patsubst %.c,%,$(SRCS))
.PHONY:all clean
all:$(OBJS)
%:%.c
	$(CC) $(CFLAGS) $@ $<
clean:
	rm -f $(OBJS)
