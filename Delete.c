#include <stdio.h>
#include <stdlib.h>
#include "LinkList1.h"

/* 删除链表指定位置的数据 */
LinkList * DeleteLocalList(LinkList *L, int n)
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
    /* 摘除该结点 */
    p->proir->next = p->next;
    p->next->proir = p->proir;
    L = p;
    free(p);
    return L;
}

/* 删除链表中指定的数据 */
LinkList * DeleteDataList(LinkList *L, ElemType e)
{
    /* 检测链表 */
    ParamentList(L);
    /* 创建临时结点指向原链表 */
    LinkList *p = L;
    /* 遍历链表 */
    while(p->next)
    {
        /* 若遍历的结点的数据域等于e */
        if(p->data == e)
        {
            /* 摘除该结点 */
            p->proir->next = p->next;
            p->next->proir = p->proir;
            free(p);
        }
        p = p->next;
    }
    return L;
}