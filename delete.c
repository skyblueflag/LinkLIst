#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//p为原链表，add为要删除的元素
link *delElem(link *p, int add){
    link * temp = p;
    //遍历到被删除结点的上一结点
    for(int i = 1;i < add;i++){
        temp = temp->next;
        if(temp->next == NULL){
            printf("没有该结点！\n");
            return p;
        }
    }
    //单独设置一个指针指向被删除的结点，以防丢失
    link *del = temp->next;
    //删除某个结点的方法就是更改前一个结点的指针域
    temp->next = temp->next->next;
    //手动释放该结点，防止内存泄漏
    free(del);
    return p;
}