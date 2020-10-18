#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList1.h"

/* 初始化双链表 */
LinkList * InitList(LinkList *L)
{
    /* 申请空间，创建头结点 */
    LinkList *p = (LinkList*)malloc(sizeof(LinkList));
    /* 创建一个空表 */
    p->next = NULL;
    p->proir = NULL;
    L = p;
    return L;
}