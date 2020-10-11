#include <stdio.h>
#include <stdlib.h>
#include "LinkList0.h"

/* 输出链表 */
void Display(LinkList *L)
{
    /* 将temp重新指向头结点 */
    LinkList *temp = L;
    /* 只要temp指针指向的结点next不是NULL，就执行输出 */
    printf("数据 = {");
    while(temp->next)
    {
        temp = temp->next;
        printf("%d", temp->data);
        if(temp->next)
        {
            printf(", ");
        }
    }
    printf("}\n");
    printf("\n");
}