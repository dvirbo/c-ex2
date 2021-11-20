CC=gcc
C_MAT=my_mat.c
C_MAIN=main.c
FLAGS= -Wall -g

all: connections main.o my_mat.o

connections: main.o my_mat.o
	$(CC) $(FLAGS) -o main main.o my_mat.o

main.o: $(C_MAIN) my_mat.h
	$(CC) $(FLAGS) -c $(C_MAIN)

my_mat.o: $(C_MAT) my_mat.h
	$(CC) $(FLAGS) -c $(C_MAT)

.PHONY: clean all

clean:
	rm -f *.o connections 