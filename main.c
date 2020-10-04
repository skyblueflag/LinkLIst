#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MyList.h"

int main(void){
    Link Q;
    printf("初始化\n");
    InitList(&Q);
    Display(&Q);

    printf("添加元素\n");
    for(int i = 0;i < 5;i++){
        AddList(&Q, i+1);
    }
    Display(&Q);

    printf("添加数据\n");
    InsertList(&Q, 3, 8);
    Display(&Q);

    printf("删除指定位置的元素\n");
    DeleteLocList(&Q, 5);
    Display(&Q);

    printf("删除指定的元素\n");
    DeleteDaList(&Q, 3);
    Display(&Q);

    printf("查询指定位置的元素\n");
    SelectLocList(&Q, 3);
    printf("\n");

    printf("查询指定的元素\n");
    SelectDaList(&Q, 1);
    printf("\n");

    printf("修改元素\n");
    AmendList(&Q, 2, 7);
    Display(&Q);

    free(Q.data);

    return 0;
}