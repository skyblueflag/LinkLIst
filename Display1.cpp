#include<stdio.h>
#include<stdlib.h>
#include"List1.h"

void Display (LinkList *L) 
{
    LinkList *p = L;
    while(p->next)
    {
        p = p->next;
        printf("%d  ",p->data);
    }
    printf("\n");
}