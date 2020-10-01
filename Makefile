objects = ListMain1.o InsertList1.o Init.o createNode.o delete.o printList.o
cc = gcc 
Lmain : $(objects)
	cc -o Lmain $(objects)
ListMian1.o : ListMain1.c 
	cc -g -c ListMain1.c 
InsertList1.o : InsertList1.c List1.h 
	cc -g -c InsertList1.c
Init.o : Init.c List1.h
	cc -g -c Init.c 
createNode.o : createNode.c List1.h
	cc -g -c createNode.c 
delete.o : delete.c List1.h
	cc -g -c delete.c 
printList.o : printList.c 
	cc -g -c printList.c
run :
	./Lmain
clean:
	rm $(objects) Lmain

