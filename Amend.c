#include <stdio.h>
#include <stdlib.h>
#include "LinkList1.h"

/* 修改链表中指定位置的数据,n为指定的位置 */
LinkList * AmendLocalList(LinkList *L, int n, ElemType e)
{
    /* 检测链表 */
    ParamentList(L);
    /* 检测参数 */
    ParamentLocal(n);
    /* 创建临时结点指向原链表 */
    LinkList *p = L;
    /* 遍历链表到指定位置的结点 */
    for(int i = 0;i < n;i++)
    {
        p = p->next;
    }
    /* 把新数据替换到该结点的数据域 */
    p->data = e;
    return L;
}

/* 修改链表中指定的数据，temp为要修改的指定数据，e为新数据 */
LinkList * AmendDataList(LinkList *L, ElemType temp, ElemType e)
{
    /* 创建临时结点指向原链表 */
    LinkList *p = L;
    /* 遍历链表 */
    while(p->next)
    {
        p = p->next;
        /* 若该结点的数据域等于temp */
        if(p->data == temp)
        {
            /* 把新数据e替换到该数据域 */
            p->data = e;
        }
    }
    return L;
}