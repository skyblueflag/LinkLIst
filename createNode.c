#include "List1.h"

//创建头结点
struct Node * createLink(){
    //创建一个头结点
    struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
    //初始化头结点
    headNode->Next = NULL;
    return headNode;
}

//创建结点
struct Node* createNode(int data){
    //创建头结点
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    //对头结点数据域进行赋值
    newNode->data = data;
    //头结点的直接后继位置为空
    newNode->Next = NULL;
    return newNode;
}
