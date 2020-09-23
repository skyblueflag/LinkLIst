/* 线性表初始化操作 */
#include "List0.h"

table InitTable(table t){
    //给线性表申请初始空间
    t.head = (int*)malloc(Size*sizeof(int));
    //判断申请失败的情况
    if(!t.head){
        printf("初始化失败！\n");
        exit(0);
    }
    t.length = 0;  //初始化长度为0
    t.size = Size; //初始化长度为5
    return t;
}