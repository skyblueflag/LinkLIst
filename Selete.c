#include <stdio.h>
#include <stdlib.h>
#include "MyList.h"

//查询顺序表中指定位置的元素
Status SelectLocList(Link *L, int n){
    //参数检测
    Parament(L);
    //下标检测
    if(n < 1 || n > L->length){
        printf("位置错误！要查询的位置不存在！\n");
        return ERROR;
    }
    printf("查询位置\'%d\'的数据为:%d",n, L->data[n-1]);
    return OK;
}

Status SelectDaList(Link *L, ElemType e){
    //参数合法性检测
    Parament(L);
    int n;
    //遍历数组，若找到该数据的存储位置
    for(int i = 0;i < L->length;i++){
        if(L->data[i] == e){
            //输出该位置
            n = i;
            printf("%d的存储位置为：%d", e, n+1);
        }
    }
    return OK;
}