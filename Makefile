CC = gcc
CFLAGS = -Wall

.PHONY: all test clean

all:
	$(CC) $(CFLAGS) src/main.c src/add.c -o app

test:
	$(CC) $(CFLAGS) test/test_add.c src/add.c -o test_app

clean:
	rm -f app test_app
