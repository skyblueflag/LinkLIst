#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//创建链表
link *initLink(){
    //创建一个头结点
    link *p = (link*)malloc(sizeof(link));
    //声明一个指针指向头结点，用于遍历链表
    link *temp = p;
    //生成链表
    for(int i = 1;i < 5;i++){
        //创建结点并初始化
        link *a = (link*)malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        //建立新结点与直接前驱结点的逻辑关系
        temp->next = a;
        temp = temp->next;
    }
    return p;
}