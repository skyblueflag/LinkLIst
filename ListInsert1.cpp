#include<stdio.h>
#include<stdio.h>
#include<malloc.h>
#include"List1.h"

/* 在L中第i个结点位置前插入新的数据元素e, L的长度加1 */
Status ListInsert(LinkList *L, int i, ElemType e) 
{
    int j;
    LinkList p, s;
    p = *L;
    j = 1;
    /* 寻找第i-1个结点 */
    while (p && j < i) 
    {
        p = p->next;
        ++j;
     }
     if(! p || j > i) //第i个结点不存在
     {
         return ERROR;
      }
      //生成新结点
      s = (LinkList)malloc(sizeof(Node)) ;
      s->data = e;
      /*将p的后继结点赋值给s的后继 */
      s->next = p->next;
      /* 将s赋值给p的后继 */
      p->next = s;
      return TRUE;
}