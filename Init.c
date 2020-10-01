#include "List1.h"

//头插法，插入结点，参数：插入哪个链表，插入结点的参数就是多少
void insertNodeByHead(struct Node* headNode, int data){
    //1,创建插入的结点
    struct Node* newNode = createNode(data);
    newNode->Next = headNode->Next;
    headNode->Next = newNode;
}