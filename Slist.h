#include<stdio.h>
#include<stdlib.h>

typedef int Elements;

typedef struct Table{
    Elements *data;
    int length;
}table;

//初始化
table InitTable(table);

//增
table AddTable(table, int, Elements);

//删
table DeleteTable(table, int);

//查
int SelectTable(table, int);

//改
table AmendTable(table, int, Elements);

