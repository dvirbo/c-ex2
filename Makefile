CC=gcc
C_MAT=my_mat.c
C_MAIN=main.c
FLAGS= -Wall -g

all: libmy_mat.a main 

main: main.o libmy_mat.a
	$(CC) $(FLAGS) -o main main.o libmy_mat.a

libmy_mat.a: my_mat.o main.o
	ar -rcs libmy_mat.a main.o my_mat.o

main.o: $(C_MAIN) my_mat.h
	$(CC) $(FLAGS) -c $(C_MAIN)

my_mat.o: $(C_MAT) my_mat.h
	$(CC) $(FLAGS) -c $(C_MAT)


.PHONY: clean all

clean:
	rm -f *.o *.a main