#include<stdio.h>
#include<stdlib.h>
#include"Slist.h"

int main(void){
    table t = InitTable(t);
    printf("线性表增加元素：\n");
    AddTable(t, 2, 5);
    printf("t = ");
    for(int i = 0;i < t.length;i++){
        printf("%d ", t.data[i]);
    }
    printf("\n线性表删除元素：\n");
    DeleteTable(t, 3);
    printf("t = ");
    for(int i = 0;i < t.length;i++){
        printf("%d ", t.data[i]);
    }
    printf("\n线性表查询元素：\n");
    SelectTable(t, 4);
    printf("\n线性表修改元素操作：\n");
    AmendTable(t, 4, 6);
    printf("t = ");
    for(int i = 0;i < t.length;i++){
        printf("%d ", t.data[i]);
    }
    printf("\n");
    return 0;
}