/*主函数*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"List1.h"

int main(void)
{
    LinkList *L;
    ElemType e;
    int n;
    printf("创建10个元素的单链表,头插法\n") ;
    n = 10;
    CreateListHead(L, n);
    Display (L);  
    printf("插入新元素\n");
    ListInsert (L, 5, 11);
    n= 11;
    Display (L);
    printf("\n删除元素\n");
    ListDelete (L,  6, &e);
    n = 10;
    Display (L);
    printf("\n整表删除\n");
    ClearList(L) ;
    printf("整表创建，尾插法\n");
    CreateListTail(L, 9);
    n = 9;
    Display (L);

    return 0;
}