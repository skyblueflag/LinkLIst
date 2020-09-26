/* 修改线性表中的数据 */
#include <stdio.h>
#include <stdlib.h>
#include "list0.h"

//修改线性表中的指定数据，num为要修改的旧数据，temp为要改成的新数据
Status AmendDaList0(table *L, Elements num, Elements temp){
    //参数合法性检测
    ParameterDetection(L);
    Elements *p = L->data;
    for(int i = 0;i < L->length -1;i++){
        p[i] = L->data[i];
    }
    //若找到数据num，则将temp替换到该位置
    for(int i = 0;i < L->length -1;i++){
        if(num == p[i]){
            p[i] = temp;
            L->data[i] = p[i];
        }
    }
    return  TRUE;
}

//修改线性表中指定位置的数据
Status AmendLocList0(table*L, int n, Elements e){
    //参数合法性检测
    ParameterDetection(L);
    if(n < 1 || n > L->length){
        printf("参数错误！\n");
        return ERROR;
    }
    Elements *p = L->data;
    for(int i = 0;i < L->length -1;i++){
        p[i] = L->data[i];
    }
    p[n -1] = e;
    L->data[n -1] = p[n -1];
    return  TRUE;
}
