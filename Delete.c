#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

/* 删除链表中指定位置的元素，n为指定的位置 */
LinkList * DeleteLocList(LinkList *L, int n)
{
    /* 创建一个临时结点 */
    LinkList *temp = L;
    /* 遍历到被删除位置的上一个结点 */
    for(int i = 1;i < n;i++)
    {
        temp = temp->next;
        /* 若不存在该位置 */
        if(temp->next == NULL)
        {
            printf("没有该结点！\n");
            return L;
        }
    }
    /* 设置一个新结点指向被删除的结点 */
    LinkList *p = temp->next;
    /* 将被删除位置的上一个结点的指针域指向该位置的下一个结点 */
    temp->next = temp->next->next;
    /* 释放被删除的结点 */
    free(p);
    return L;
}

/* 删除链表中的指定数据，e为之指定数据 */
LinkList * DeleteDataList(LinkList *L, ElemType e)
{
    /* 创建临时结点指向原结点 */
    LinkList *temp = L;
    /* 创建一个临时结点指向链表头结点后的结点 */
    LinkList *q = L->next;
    /* 遍历链表，将非删除的结点赋值给temp */
    while (q->next != NULL && q->data != e)
    {
        temp = q;
        q = q->next;
    }
    /* 释放要删除的结点 */
    if(q->data == e)
    {
        temp->next = q->next;
        free(q);
    }
    else
    {
        printf("未找到该数据！\n");
    }
    return L;
}