SRC  = $(wildcard src/*.c)
OBJS = $(SRC:.c=.o)

CC=clang
CFLAGS=-Wall -g -Ideps -Isrc

all:
	rm -f str-truncate
	$(CC) $(CFLAGS) $(SRC) test.c  -o test
	./test
	
clean:
	rm -f test
	rm -r test.dSYM
