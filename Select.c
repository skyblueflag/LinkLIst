#include <stdio.h>
#include <stdlib.h>
#include "LinkList1.h"

/* 查询链表指定位置的数据 */
ElemType SelectLocalList(LinkList *L, int n)
{
    /* 检测链表 */
    ParamentList(L);
    /* 检测参数 */
    ParamentLocal(n);
    /* 创建临时结点指向原链表 */
    LinkList *p = L;
    /* 遍历链表 */
    for(int i = 0;i < n;i++)
    {
        p = p->next;
    }
    /* 输出该位置的结点数据域存储的数据 */
    printf("%d位置存储的数据：%d\n", n, p->data);
    printf("\n");
    return p->data;
}

/* 查询链表中指定的数据 */
int SelectDataList(LinkList *L, ElemType e)
{
    /* 检测链表 */
    ParamentList(L);
    /* 创建临时结点指向原链表 */
    LinkList *p = L;
    /* 声明一个整形用于打印位置 */
    int n = 1;
    /* 遍历链表 */
    while(p->next)
    {
        p = p->next;
        /* 若该结点的数据域等于e */
        if(p->data == e)
        {
            /* 输出位置 */
            printf("数据%d存储的位置：%d\n", p->data, n);
        }
        n++;
    }
    printf("\n");
    return n;
}