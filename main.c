#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList1.h"

int main(void)
{
    printf("初始化\n");
    LinkList *L = InitList(L);
    DisplayList(L);

    printf("头插法\n");
    for(int i = 1;i < 6;i++)
    {
        InsertHeadList(L, i);
    }
    DisplayList(L);

    printf("尾插法\n");
    for(int i = 6;i < 9;i++)
    {
        InsertTailList(L, i);
    }
    DisplayList(L);

    printf("添加数据到指定位置\n");
    InsertLocalList(L, 6, 9);
    DisplayList(L);

    printf("删除指定位置的结点\n");
    DeleteLocalList(L, 5);
    DisplayList(L);

    printf("删除链表中指定的数据\n");
    DeleteDataList(L, 3);
    DisplayList(L);

    printf("修改链表指定位置的数据\n");
    AmendLocalList(L, 2, 10);
    DisplayList(L);

    printf("修改链表指定的数据\n");
    AmendDataList(L, 2, 11);
    DisplayList(L);

    printf("查询链表中指定位置的数据\n");
    SelectLocalList(L, 4);

    printf("查询链表中指定的数据\n");
    SelectDataList(L, 6);

    free(L);
    return 0;
}