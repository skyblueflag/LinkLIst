#ifndef LINK0_H_
#define LINK0_H_

//声明结点结构
typedef struct Link{
    int elem;  //数据域
    struct Link* next;  //指针域
}link;
//创建链表
link *initLink();
//链表插入元素
link *insertElem(link*, int, int);
//链表删除元素
link *delElem(link*, int);
//链表查找元素
int selectElem(link*, int);
//链表更新元素
link *amendElem(link*, int, int);
//打印链表
void display(link*);

#endif //LINK0_H_