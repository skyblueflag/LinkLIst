/*单链表的整表创建，尾插法*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"List1.h"
/*随机产生n个元素的值，建立带表头结点的单链线性表L(尾插法)*/
void CreateListTail(LinkList *L, int n) 
{
    LinkList p, r;
    int i;
    /*初始化随机数种子为整个线性表*/
    srand(time(0)) ;
    *L = (LinkList)malloc(sizeof(Node)) ;
    /*r为指向尾部的结点*/
    r = *L;
    for(i = 0;i < n;i++) 
    {
        /*生成新结点*/
        p = (Node)malloc(sizeof (Node)) ;
        /*随机生成100以内的数字*/
        p->data = rand()%100+1;
        /* 将表尾终端结点的指针指向新结点 */
        r->next = p;
        /*将当前的新结点定义为表尾终端结点*/
        r = p;
     }
     /*当前链表结束*/
     r->next = NULL;
 }