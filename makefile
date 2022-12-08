CC = gcc
Flags = -Wall -g
Objects_mat  = my_mat.o
Objects_main = main.o

.PHONY: clean all

all: connections my_lib

connections: $(Objects_main) makematrix.a 
	$(CC) $(Flags) -o connections $(Objects_main) makematrix.a -lm
my_lib: makematrix.a
makematrix.a: $(Objects_mat)
	ar -rcs makematrix.a $(Objects_mat)
main.o: main.c my_mat.h
	$(CC) $(Flags) -c main.c
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(Flags) -c my_mat.c


clean:
	rm -f *.o *.a  connections