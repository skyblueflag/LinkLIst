#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MyList.h"

//参数合法性检测，申请新空间
void Parament(Link *L){
    //参数合法性检测
    if(NULL == L){
        printf("参数错误！\n");
        return;
    }
    //判断空间是否已满
    if(L->MaxSize == L->length){
        //容量增加
        L->MaxSize += 1;
        //申请空间
        ElemType *p = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
        //初始化空间
        memset(p, 0, sizeof(ElemType)*L->MaxSize);
        //将原数据赋值到新空间
        for(int i = 0;i < L->length;i++){
            p[i] = L->data[i];
        }
        //将原空间释放
        free(L->data);
        //将数组头指针指向新指针
        L->data = p;
    }
}