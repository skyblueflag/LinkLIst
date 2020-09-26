/* 线性表初始化方法实现 */
#include "list0.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//初始化顺序线性表
Status InitList0(table *L){
    //设定初始容量为5
    L->listsize = 5;
    //申请空间
    L->data = (Elements*)malloc(sizeof(Elements)*L->listsize);
    //如果分配空间失败
    if(!L->data)
        exit(ERROR);
    //分配空间成功后，长度为0
    L->length = 0;
    return  OK;
}
