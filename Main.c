#include <stdio.h>
#include <stdlib.h>
#include "link0.h"

int main(void){
    printf("初始化链表为：\n");
    link *p = initLink();
    display(p);

    printf("在第四个结点插入元素5\n");
    p = insertElem(p, 5, 4);
    display(p);

    printf("删除元素3\n");
    p = delElem(p, 3);
    display(p);

    printf("查找元素2\n");
    int address = selectElem(p, 2);
    if(address == -1){
        printf("没有该元素！\n");
    }
    else{
        printf("该元素的位置为： %d\n", address);
    }

    printf("更改第3个结点的数据域为7\n");
    p = amendElem(p, 3, 7);
    display(p);
    
    return 0;
}