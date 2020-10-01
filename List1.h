/* 线性表的单链表存储结构 */
#define ERROR 0
#define TRUE 1
#include <stdio.h>
#include<stdlib.h>

typedef int ElemType, Status;
typedef struct Node
{
    ElemType data;
    struct Node *next;
}LinkList;

//单链表的读取
Status GetElem (LinkList*, int, ElemType*) ;
//单链表的插入
Status ListInsert(LinkList*, int, ElemType) ;
//单链表的删除
Status ListDelete(LinkList*, int, ElemType*) ;
//单链表的整表创建,头插法
void CreateListHead(LinkList*, int) ;
//单链表的整表创建,尾插法
void CreateListTail (LinkList*, int) ;
//单链表的整表删除
Status ClearList(LinkList*) ;
//打印输出单链表的数据
void Display(LinkList*);