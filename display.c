#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//打印链表
void display(link *p){
    //将temp指针重新指向头结点
    link *temp = p;
    //只要temp指针指向的结点的next不是NULL，就执行输出
    while(temp->next){
        temp = temp->next;
        printf("%d ", temp->elem);
    }
    printf("\n");
}