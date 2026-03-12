CC = gcc
CFLAGS = -Wall -Wextra

SRCS = $(shell find . -name "*.c")
BINS = $(SRCS:.c=)

all: $(BINS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	find . -name "*.c" | sed 's/\.c//' | xargs rm -f

.PHONY: all clean
