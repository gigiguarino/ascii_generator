

CC = g++
CFLAGS = -Wall -Werror

all: ascii.cpp letters.h
	$(CC) $(CFLAGS) ascii.cpp -o ascii.o

clean: 
	rm ascii.o
	
