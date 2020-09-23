#include<stdio.h>
#include<stdlib.h>
#define Size 5

typedef struct Table{
    int *head;   //存储线性表元素
    int length;  //表示线性表长度
    int size;    //用于申请线性表空间
}table;

//初始化线性表
table InitTable(table);

//线性表增加元素操作
table AddTable(table, int, int);

//线性表删除元素操作
table DeleteDataTable(table, int);

//线性表删除指定位置的元素操作
table DeletePlaceTable(table, int);

//线性表查询数据操作
int SearchDataTable(table, int);

//线性表查询指定位置的元素
int SearchPlaceTable(table, int);

//线性表更改元素操作
table AmendTable(table, int, int);

//输出线性表
void DisplayTable(table);