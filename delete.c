#include "List1.h"

//删除结点
void deleteNodeByAppoin(struct Node* headNode, int posData){
    struct Node* posNode = headNode->Next;
    struct Node* posNodeFront = headNode;
    if(posNode == NULL){
        printf("无法删除，链表为空！\n");
    }
    else
    {
        while(posNode->data != posData)
        {
            posNodeFront = posNode;
            posNode = posNodeFront->Next;
            if(posNode == NULL)
            {
                printf("没有找到相关信息，无法删除！\n");
                return;
            }
        }
        posNodeFront->Next = posNode->Next;
        free(posNode);
    }
    
}