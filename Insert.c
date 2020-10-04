#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MyList.h"

//顺序表添加元素,e为要添加的数据
void AddList(Link *L, ElemType e){
    //参数合法性检测
    Parament(L);
    L->data[L->length] = e;
    L->length++;
}

//给顺序表插入元素,n为要插入的位置，e为要插入的元素
Status InsertList(Link *L, int n, ElemType e){
    //参数合法性检测，申请新空间
    Parament(L);
    //如果下标过大
    if(n > L->length){
        n = L->length;
    }
    //指定位置后的数据后移
    for(int i = L->length;i > n;i--){
        L->data[i] = L->data[i-1];
    }
    //数据赋值到指定位置
    L->data[n] = e;
    //数量+1
    L->length++;
    return TRUE;
}