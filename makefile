objects = ListMain0.o Init0.o ListAdd0.o ListDelete0.o ListSearch0.o ListChange0.o Display0.o
cc = gcc
a.out : $(objects)
	gcc -o $(objects)
ListMain0.o : ListMain0.c List0.h
	gcc -g -c ListMain0.c 
Init0.o : Init0.c 
	gcc -g -c Init0.c 
ListAdd0.o : ListAdd0.c 
	gcc -g -c ListAdd0.c 
ListDelete0.o : ListDelete0.c 
	gcc -g -c ListDelete0.c 
ListSearch0.o : ListSearch0.c 
	gcc -g -c ListSearch0.c 
ListChange0.o : ListChange0.c
	gcc -g -c ListChange0.c
Display0.o : Display0.c 
	gcc -g -c Display0.c 
run :
	./a.out 
clean : 
	rm $(objects) a.out 
