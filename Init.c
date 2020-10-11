#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList0.h"

/* 初始化一个空链表 */
LinkList * InitList()
{
    /* 创建头结点 */
    LinkList *pHead = (LinkList*)malloc(sizeof(LinkList));
    pHead->next = NULL;
    return pHead;
}