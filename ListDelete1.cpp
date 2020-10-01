#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"List1.h"
/* 删除L的第i个结点，并用e返回其值，L的长度减1*/
Status ListDelete (LinkList *L, int i, ElemType *e) 
{
    int j;
    LinkList p, q;
    p = *L;
    j = 1;
    //遍历寻找第i-1个结点
    while (p->next && j < i) 
    {
        p = p->next;
        ++j;
     }
     //第i个结点不存在
     if(! (p->next)  || j > i) 
     {
         return ERROR;
      }
      q = p->next;
      /* 将q的后继值赋给p的后继值 */
      p->next  = q->next;
      /* 将q结点中的数据给e */
      *e = q->data;
      /*回收此结点，释放内存 */
      free (q) ;
      return TRUE;
}