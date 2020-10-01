/*单链表的整表删除*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"List1.h"
/*将L重置为空表*/
Status ClearList(LinkList *L) 
{
    LinkList *p, *q;
    /*p指向第一个结点*/
    p = L->next;
    //没到表尾
    while (p) 
    {
        q = p->next;
        free(p) ;
        p = q;
     }
     //头结点指针域为空
     L->next = NULL;
     return TRUE;
}