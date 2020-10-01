#include<stdio.h>
#include<stdio.h>
#include"List1.h"

//单链表的插入
Status ListInsert(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;
    p = L->next; /* 让p指向链表L的第一个结点 */
    j = 1; /* j为计数器 */
    /* p不为空且计数器j还没有等于i时，循环继续 */
    while (p && j < i) 
    {
        p = p->next; /* 让p指向下一个结点 */
        ++j;
     }
     if(! p || j > i) 
     {
         return ERROR; /* 第i个结点不存在 */
      }
      *e = p->data; /* 取第i个结点的数据 */
      return TRUE;
}