/*单链表的整表创建*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"List1.h"

/*随机产生n个元素的值，建立带表头的单链线性表L，头插法 */
void CreateListHead(LinkList *L, int n) 
{
    LinkList p;
    int i;
    /*初始化随机数字种子*/
    stand(time(0)) ;
    *L = (LinkList)malloc(sizeof(Node)) ;
    /*先建立一个带头结点的单链表*/
    (*L)->next = NULL;
    for(i = 0;i < n;i++) 
    {
        /*生成新结点*/
        p = (LinkList) malloc (sizeof(Node)) ;
        /*随机生成100以内的数字*/
        p->data = rand()%100+1;
        p->next = (*L)->next;
        /*插入到表头*/
        (*L)->next = p;
     }
}