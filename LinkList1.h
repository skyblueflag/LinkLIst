#ifndef LINKLIST1_H_
#define LINKLIST1_H_
//双链表
typedef int ElemType;
typedef struct Node
{
    ElemType data;   //数据其
    struct Node *proir, *next;  //指针域，指向前驱，指向后驱
}Node, LinkList;
//检测链表
void ParamentList(LinkList*);
//检测位置合法性
void ParamentLocal(int);
//初始化链表
LinkList * InitList(LinkList*);
//添加数据到双链表指定位置
LinkList * InsertLocalList(LinkList*, int, ElemType);
//添加数据到双链表头部
LinkList * InsertHeadList(LinkList*, ElemType);
//添加数据到双链表尾部
LinkList * InsertTailList(LinkList*, ElemType);
//删除双链表指定位置的数据
LinkList * DeleteLocalList(LinkList*, int);
//删除双链表指定的数据
LinkList * DeleteDataList(LinkList*, ElemType);
//修改双链表指定位置的数据
LinkList * AmendLocalList(LinkList*, int, ElemType);
//修改双链表指定的数据
LinkList * AmendDataList(LinkList*, ElemType, ElemType);
//查询双链表中指定位置的数据
ElemType SelectLocalList(LinkList*, int);
//查询双链表中指定的数据
int SelectDataList(LinkList*, ElemType);
//打印输出双链表
void DisplayList(LinkList*);


#endif //LINKLIST_H_