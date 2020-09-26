/* 线性表删除元素操作 */
#include "list0.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//参数合法性检测
void ParameterDetection(table *L){
    if(NULL == L){
        printf("参数错误！\n");
    }
    return;
}

//删除尾部
Status DelTailList0(table *L){
    //参数合法性检测
    ParameterDetection(L);
    L->length--;
    return TRUE;
}

//删除全部元素
Status DeleteAllList0(table *L){
    //参数合法性检测
    ParameterDetection(L);
    L->length = 0;
    return TRUE;
}

//重置线性表
Status ResetAllList0(table *L){
    //参数合法性检测
    ParameterDetection(L);
    L->length = 0;
    L->listsize = 0;
    free(L->data);
    return  TRUE;
}

//删除线性表中的指定数据,e为要删除的数据
Status DelDaList0(table *L, Elements e){
    int i, n;
    //参数合法性检测
    ParameterDetection(L);
    //若数组中存在与e相等的元素，将该元素后的元素前移
        for(i = 0;i <L->length -1;i++){
            if(e == L->data[i]){
                for(n = i;n < L->length -1;n++)
                    L->data[n] = L->data[n+1];
        }
    }
    //数量-1
    L->length--;
    return  TRUE;
}

//删除线性表中指定位置的数据，n为要删除数据的位置
Status DelLocList0(table *L, int n){
    //参数合法性检测
    ParameterDetection(L);
    if(n < 1 || n > L->length){
        printf("参数有误！\n");
    }
    //将该位置后的元素前移
    for(int i = n - 1;i < L->length -1;i++){
        L->data[i] = L->data[i +1];
    }
    //长度-1
    L->length--;
    return  TRUE;
}
