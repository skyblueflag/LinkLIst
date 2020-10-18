#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList1.h"

/* 添加数据到双链表头部，头插法 */
LinkList * InsertHeadList(LinkList *L, ElemType e)
{
    /* 创建临时结点 */
    LinkList *p = (LinkList*)malloc(sizeof(LinkList));
    /* 把新数据赋给p的数据域 */
    p->data = e;
    /* 把p链接到原链表 */
    /* 当原链表为空表时,直接链接到头结点后 */
    if(L->next == NULL)
    {
        p->next = L->next;
        p->proir = L;
        L->next = p;
    }
    else   /* 当原链表非空表时，链接到头结点与原首元结点之间 */
    {
        p->next = L->next;
        L->next->proir = p;
        p->proir = L;
        L->next = p;
    }
    return L;
}

/* 添加数据到双链表尾部,尾插法 */
LinkList * InsertTailList(LinkList *L, ElemType e)
{
    /* 创建临时结点 */
    LinkList *p = (LinkList*)malloc(sizeof(LinkList));
    /* 把新数据赋给p结点的数据域 */
    p->data = e;
    /* 遍历链表到尾结点 */
    while(L->next)
    {
        L = L->next;
        /* 当遍历到尾结点时，把结点p链接到尾结点 */
        if(L->next == NULL)
        {
            p->next = NULL;
            p->proir = L;
            L->next = p;
            break;
        }
    }
    return L;
}

/* 添加数据到链表指定位置,n为指定位置 */
LinkList * InsertLocalList(LinkList *L, int n, ElemType e)
{
    /* 检测链表 */
    ParamentList(L);
    /* 检测参数合法性 */
    ParamentLocal(n);
    /* 创建临时结点 */
    LinkList *p = (LinkList*)malloc(sizeof(LinkList));
    /* 把新数据赋给结点p的数据域 */
    p->data = e;
    /* 遍历到要插入的位置的前一个结点 */
    for(int i = 0;i < n-1;i++)
    {
        L = L->next;
    }
    /* 如果位置在表尾，则把p结点链接到表尾 */
    if(L->next == NULL)
    {
        p->next = NULL;
        p->proir = L;
        L->next = p;
    }
    else  /* 若位置不在表尾，则链接到要插入位置 */
    {
        p->next = L->next;
        L->next->proir = p;
        p->proir = L;
        L->next = p;
    }
    return L;
}