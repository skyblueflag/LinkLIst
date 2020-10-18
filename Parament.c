#include <stdio.h>
#include <stdlib.h>
#include "LinkList1.h"

/* 检测链表 */
void ParamentList(LinkList *L)
{
    if(L == NULL)
    {
        printf("链表为空！\n");
        return;
    }
}

/* 检测位置合法性 */
void ParamentLocal(int n)
{
    if(n < 1)
    {
        printf("位置错误！\n");
        return;
    }
}