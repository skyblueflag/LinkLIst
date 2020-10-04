#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "MyList.h"

//修改顺序表中的元素,n为要修改的元素的位置，e为要改成的新元素
Status AmendList(Link *L, int n, ElemType e){
    //参数检测
    Parament(L);
    //若下标过大
    if(n > L->length){
        printf("位置错误！\n");
        return ERROR;
    }
    //替换要修改位置的元素
    L->data[n-1] = e;
    return OK;
}