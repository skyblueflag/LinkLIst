#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

int main(void)
{
    /* 创建并初始化链表 */
    printf("创建并初始化链表\n");
    LinkList *L = InitList();
    Display(L);

    printf("插入元素到链表指定位置\n");
    for(int i = 1;i < 5;i++)
    {
        InsertLocList(L, i, i);
    }
    Display(L);

    printf("插入元素到链表首部\n");
    InsertHeadList(L, 5);
    Display(L);

    printf("删除链表中指定位置的元素\n");
    DeleteLocList(L, 3);
    Display(L);

    printf("删除链表中的指定数据\n");
    ElemType a = 1;
    DeleteDataList(L, a);
    Display(L);
    a = 6;
    DeleteDataList(L, a);
    Display(L);

    printf("修改链表中指定位置的元素\n");
    AmendLocList(L, 2, 7);
    Display(L);

    printf("修改链表中的指定数据\n");
    AmendDataList(L, 4, 8);
    Display(L);

    printf("查询链表中指定位置的数据\n");
    SelectLocList(L, 1);

    printf("查询链表指定的数据\n");
    SelectDataList(L, 7);

    free(L);
    return 0;
}