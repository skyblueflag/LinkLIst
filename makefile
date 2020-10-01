objects = ListMain.o ListInsert1.o ListDelete1.o GetElem.o Display1.o ClearList1.o CreatListHead1.o CreateListTail1.o 
ListMain1.exe : $(objects)
	g++ -o ListMain1.exe $(objects)
ListMain.o : ListMain.cpp
	g++ -g -c ListMain.cpp 
ListInsert1.o : ListInsert1.cpp List1.h
	g++ -g -c ListInsert1.cpp 
ListDelete1.o : ListDelete1.cpp List1.h 
	g++ -g -c ListDelete1.cpp 
GetElem.o : GetElem.cpp List1.h 
	g++ -g -c GetElem.cpp 
Display1.o : Display1.cpp List1.h 
	g++ -g -c Display1.cpp 
ClearList1.o : ClearList1.cpp List1.h 
	g++ -g -c ClearList1.cpp 
CreatListHead1.o : CreatListHead1.cpp List1.h 
	g++ -g -c CreatListHead1.cpp 
CreateListTail1.o : CreateListTail1.cpp List1.h 
	g++ -g -c CreateListTail1.cpp 
run : 
	./ListMain1.exe 
clean :
	rm ListMain1.exe $(objects)