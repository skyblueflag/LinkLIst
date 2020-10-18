#include <stdio.h>
#include <stdlib.h>
#include "LinkList1.h"

/* 打印输出链表 */
void DisplayList(LinkList *L)
{
    /* 创建临时结点指向L */
    LinkList *p = L;
    printf("数据域 = {");
    while(p->next)
    {
        p = p->next;
        printf("%d", p->data);
        if(p->next)
        {
            printf(", ");
        }
    }
    printf("}\n\n");

}