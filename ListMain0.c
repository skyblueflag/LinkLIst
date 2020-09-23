#include<stdio.h>
#include<stdlib.h>
#include"List0.h"

int main(void){
    table t1 = InitTable(t1);
    int a, b;
    for(int i = 1;i < Size;i++){
        t1.head[i -1] = i;
        t1.length++;
    }
    printf("未操作前的初始线性表：\n");
    DisplayTable(t1);

    printf("\n插入元素：\n");
    printf("请输入要插入的位置和数据：\n");
    scanf("%d %d", &a, &b);
    AddTable(t1, a, b);
    DisplayTable(t1);

    printf("\n删除元素：\n");
    printf("请输入要删除的数据：\n");
    scanf("%d", &a);
    DeleteDataTable(t1, a);
    DisplayTable(t1);

    printf("\n删除指定位置的元素：\n");
    printf("请输入要删除元素的指定位置：\n");
    scanf("%d", &b);
    DeletePlaceTable(t1, b);
    DisplayTable(t1);

    printf("\n查询元素：\n");
    printf("请输入要查询的元素：\n");
    scanf("%d", &a);
    SearchDataTable(t1, a);
    DisplayTable(t1);

    printf("\n查询指定位置的元素：\n");
    printf("请输入要查询的位置：\n");
    scanf("%d", &b);
    SearchPlaceTable(t1, b);
    DisplayTable(t1);

    printf("\n更改元素：\n");
    printf("请输入要更改的元素和要改成的元素：\n");
    scanf("%d %d", &a, &b);
    AmendTable(t1, a, b);
    DisplayTable(t1);

    return 0;
}
