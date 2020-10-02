#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//p为原链表，elem为被查找的元素
int selectElem(link *p, int elem){
    //新建一个指针t，初始化头指针p
    link *t = p;
    int i = 1;
    //由于头结点的存在，因此while循环中的判断为t->next
    while(t->next){
        t = t->next;
        if(t->elem == elem){
            return i;
        }
        i++;
    }
    //若查找失败，返回-1
    return -1;
}