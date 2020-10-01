#ifndef LIST1_H_
#define LIST1_H_
#include <stdio.h>
#include <stdlib.h>

//结点结构体
typedef struct Node{
    int data; //指针域
    struct Node* Next; //数据域
}Node;

//创建链表
struct Node * createLink();
//创建结点
struct Node* createNode(int);
//插入结点，参数：插入哪个链表，插入结点的参数就是多少
void insertNodeByHead(struct Node*, int);
//删除结点
void deleteNodeByAppoin(struct Node*, int);

//打印
void printList(struct Node*);

#endif //LIST1_H_
