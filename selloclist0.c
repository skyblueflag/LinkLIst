/* 线性表查询数据 */
#include <stdio.h>
#include <stdlib.h>
#include "list0.h"

//查询线性表中的指定数据，e为要查询的数据
Status SelDaList0(table *L, Elements e){
    int i;
    //参数合法性检测
    ParameterDetection(L);
    Elements *p = L->data;
    for(int i = 0;i < L->length -1;i++){
        p[i] = L->data[i];
    }
    for(int i = 0;i < L->length -1;i++){
        if(e == p[i]){
            printf("存在该数据！\n");
            printf("数据%d的位置为%d\n", e, i+1);
        }
    }
    return  TRUE;
}

//查询指定位置的数据,n为要查找的位置
Status SelLocList0(table *L, int n){
    //参数合法性检测
    ParameterDetection(L);
    if(n < 1 || n > L->length){
        printf("参数错误！\n");
        return  ERROR;
    }
    //若存在该位置，打印输出该位置的数据
    printf("存在该位置！\n");
    printf("位置%d的数据为%d\n", n, L->data[n - 1]);
    return TRUE;
}
