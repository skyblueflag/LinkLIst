#ifndef LIMKLIST_H_
#define LINKLIST_H_
#include <stdio.h>

typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node, LinkList;

//初始化一个空链表
LinkList * InitList();
//向链表中指定位置插入元素
LinkList * InsertLocList(LinkList*, ElemType, int);
//插入元素到链表首部,头插法
LinkList * InsertHeadList(LinkList*, ElemType);
//删除链表中指定位置的元素
LinkList * DeleteLocList(LinkList*, int);
//删除链表中指定的元素
LinkList * DeleteDataList(LinkList*, ElemType);
//修改链表中指定位置的元素
LinkList * AmendLocList(LinkList*, int, ElemType);
//修改链表中指定的元素
LinkList * AmendDataList(LinkList*, ElemType, ElemType);
//查询链表中指定位置的元素
void SelectLocList(LinkList*, int);
//查询链表中指定的元素
void SelectDataList(LinkList*, ElemType);
//输出链表
void Display(LinkList*);

#endif//LINKLIST_H_