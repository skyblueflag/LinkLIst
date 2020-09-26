#include <stdio.h>
#include <stdlib.h>
#include "list0.h"

int main(void){
    table L;
    //初始化线性表
    InitList0(&L);
    printf("添加元素到线性表\n");
    //用循环调用往数组中添加元素
    for(int i = 0;i < 5;i++){
        AddList0(&L,int (i+1), int (i+1));
    }
    DisplayList0(&L);
    //将数组元素增加到6位，查看长度和容量变化
    AddList0(&L, 6, 6);
    DisplayList0(&L);
    //插入元素到线性表数组
    printf("\n插入元素到线性表\n");
    InsertList0(&L, 3, 8);
    DisplayList0(&L);
    InsertList0(&L, 8, 10);
    DisplayList0(&L);
    //删除尾部元素
    printf("\n删除尾部元素\n");
    DelTailList0(&L);
    DisplayList0(&L);
    //删除指定数据
    printf("\n删除指定数据\n");
    DelDaList0(&L, 3);
    DisplayList0(&L);
    //删除指定位置的元素
    printf("\n删除指定位置的数据\n");
    DelLocList0(&L, 2);
    DisplayList0(&L);
    //查询指定的数据
    printf("\n查询指定的数据\n");
    SelDaList0(&L, 5);
    //查询指定位置的数据
    printf("\n查询指定位置的数据\n");
    SelLocList0(&L, 4);
    //修改线性表中的指定数据
    printf("\n修改线性表中的指定数据\n");
    AmendDaList0(&L, 4, 9);
    DisplayList0(&L);
    //修改线性表中指定位置的数据
    printf("\n修改线性表中指定位置的数据\n");
    AmendLocList0(&L, 5, 11);
    DisplayList0(&L);

    return 0;
}
