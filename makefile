objects = Main.o init.o insert.o delete.o select.o amend.o display.o 
cc = gcc 
Main : $(objects) 
	cc -o Main $(objects)
Main.o : Main.c 
	cc -g -c Main.c 
init.o : init.c link0.h 
	cc -g -c init.c 
insert.o : insert.c link0.h 
	cc -g -c insert.c 
delete.o : delete.c link0.h
	cc -g -c delete.c 	
select.o : select.c link0.h
	cc -g -c select.c 
amend.o : amend.c link0.h
	cc -g -c amend.c 
display.o : display.c link0.h 
	cc -g -c display.c 
run:
	./Main
clean :
	rm Main $(objects) 

