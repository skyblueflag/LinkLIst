#ifndef LIST2_H_
#define LIST2_H_
#define ERROR 0
#define TRUE 1

typedef int Elem, Status;
typedef struct Node{
    Elem data;    //链表的数据域
    struct Node *Next;   //链表的指针域
    int length;   //链表长度
}LinkList;

/* 链表打印输出 */
Status Display(LinkList*);

/* 链表插入操作 */
//在链表指定位置插入数据
Status InsertList2(LinkList*, int, Elem);

/* 链表删除操作 */
//删除链表指定位置的元素
Status DeleteLocList2(LinkList*, int);
//删除链表指定数据
Status DeleteDataList2(LinkList*, Elem);

/* 链表查询操作 */
//查询链表指定位置的元素
Status SelectLocList2(LinkList*, int);
//查询链表指定元素
Status SelectDataList2(LinkList*, Elem);

/* 链表更改操作 */
Status AmendList2(LinkList*, int, Elem);

#endif