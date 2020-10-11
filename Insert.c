#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

/* 向链表中的指定位置插入元素,e为要插入的元素，n为要插入的位置 */
LinkList * InsertLocList(LinkList *L, ElemType e, int n)
{
    /* 创建一个临时结点 */
    LinkList *temp = L;
    /* 首先找到要插入位置的上一个结点 */
    for(int i = 1;i < n;i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            printf("插入位置无效！\n");
            return L;
        }
    }
    /* 创建插入结点C */
    LinkList *c = (LinkList*)malloc(sizeof(LinkList));
    c->data = e;
    /* 向链表中插入结点 */
    c->next = temp->next;
    temp->next = c;
    return L;
}

/* 插入元素到链表首部,头插法 */
LinkList * InsertHeadList(LinkList *L, ElemType e)
{
    /* 创建临时结点 */
    LinkList *temp = L;
    /* 创建插入结点 */
    LinkList *c = (LinkList*)malloc(sizeof(LinkList));
    c->data = e;
    /* 向链表中插入结点 */
    c->next = temp->next;
    temp->next = c;
    return L;
}