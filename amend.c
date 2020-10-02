#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

//更新函数，add表示更改结点在链表中的位置，newElem为新的数据域的值
link *amendElem(link *p, int add, int newElem){
    link *temp = p;
    //在遍历之前，temp指向首元结点
    temp = temp->next;
    //遍历到待更新结点
    for(int i = 1;i < add;i++){
        temp = temp->next;
    }
    //替换该结点数据域的值
    temp->elem = newElem;
    return p;
}