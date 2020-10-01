#include "List1.h"

//打印
void printList(struct Node* headNode){
    struct Node* pMove = headNode->Next;
    while(pMove){
        printf("%d ", pMove->data);
        pMove = pMove->Next;
    }
    printf("\n");
}
