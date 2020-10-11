#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

/* 查询链表中指定位置的元素，n为指定的位置 */
void SelectLocList(LinkList *L, int n)
{
    /* 创建临时结点 */
    LinkList *p = L->next;
    /* 遍历链表到要查询的位置 */
    for(int i = 0;i < n-1;i++)
    {
        p = p->next;
        /* 若不存在该位置的结点 */
        if(p->next == NULL)
        {
            printf("不存在该位置！\n");
            return;
        }
    }
    /* 找到该位置后 */
    printf("该位置%d存储的数据为: %d\n",n, p->data);
    printf("\n");
}

/* 查询链表中指定的数据,e为指定的数据 */
void SelectDataList(LinkList *L, ElemType e)
{
    /* 创建临时结点指向头结点后的链表 */
    LinkList *p = L->next;
    /* 若找到该元素 */
    int i = 1;
    while(p->next != NULL)
    {
        i++;
        p = p->next;
        if(p->data == e)
        {
            printf("该数据%d的存储结点位置为：%d\n",e, i);
        }
    }
    /* 若未找到该元素 */
    while(p->next != NULL)
    {
        p = p->next;
        if(p->next == NULL && p->data != e)
        {
            printf("未找到该数据！\n");
        }
    }
    printf("\n");
}