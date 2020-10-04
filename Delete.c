#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MyList.h"

//删除顺序表中指定位置的元素,n为要删除的位置
Status DeleteLocList(Link *L, int n){
    //参数检测
    if(NULL == L || n > L->length){
        printf("参数错误！\n");
        return ERROR;
    }
    //要删除位置后的元素前移
    for(int i = n-1;i < L->length;i++){
        L->data[i] = L->data[i+1];
    }
    //长度-1
    L->length--;
    //容量-1
    L->MaxSize--;
    return OK;
}

//删除顺序表中指定的元素
Status DeleteDaList(Link *L,ElemType e){
    //参数检测
    if(NULL == L){
        printf("参数错误！\n");
        return ERROR;
    }
    int n;
    //遍历数组，若找到该元素的存放位置
    for(int i = 0;i < L->length;i++){
        if(L->data[i] == e){
            //该位置后的元素迁移
            n = i;
            for(int j = n;j< L->length;j++){
                L->data[j] = L->data[j+1];
            }
        }
    }
    //长度-1
    L->length--;
    //容量-1
    L->MaxSize--;
    
}
