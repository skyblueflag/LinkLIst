#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//p为原链表，elem表示新数据元素，add表示新元素要插入的位置
link *insertElem(link *p, int elem, int add){
    //创建临时结点temp
    link *temp = p;
    //首先找到要插入位置的上一个结点
    for(int i = 1;i < add;i++){
        temp  = temp->next;
        //如果插入的位置为头结点，插入无效
        if(temp == NULL){
            printf("插入位置无效！\n");
            return p;
        }
    }
    //创建插入结点C
    link *c = (link*)malloc(sizeof(link));
    //将要插入的新元素赋值给新结点的数据域
    c->elem =elem;
    //向链表中插入结点
    c->next = temp->next;   //插入结点的指针域先指向下一个结点
    temp->next = c;         //插入位置的上一个结点的指针域再指向插入的结点
    return p;
}