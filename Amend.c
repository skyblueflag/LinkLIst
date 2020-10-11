#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

/* 修改链表中指定位置的元素 ,n为要修改的位置，e为要改成的新数据*/
LinkList * AmendLocList(LinkList *L, int n, ElemType e)
{
    /* 创建临时结点指向头结点后链表 */
    LinkList *p = L->next;
    /* 遍历到要修改的位置的上一个结点 */
    for(int i = 0;i < n-1;i++)
    {
        p = p->next;
        /* 若不存在该位置结点 */
        if(p->next == NULL)
        {
            printf("不存在该位置！\n");
            return L;
        }
    }
    /* 将新数据e替换到该位置 */
    p->data = e;
    return L;
}

/* 修改链表中指定的数据，e为要修改的旧数据，NewNum为要改成的新数据 */
LinkList * AmendDataList(LinkList *L, ElemType e, ElemType NewNum)
{
    /* 创建临时结点指向头结点后的链表 */
    LinkList *p = L->next;
    /* 遍历链表 */
    /* 若找到该元素 */
    while(p->next != NULL)
    {
        p = p->next;
        if(p->data == e)
        {
            p->data = NewNum;
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
    return L;
}