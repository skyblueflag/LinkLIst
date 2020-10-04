#include <stdio.h>
#include <stdlib.h>
#include "MyList.h"

//打印顺序表
void Display(Link *L){
    //参数检测
    if(NULL == L){
        printf("参数错误！\n");
        return;
    }
    printf("元素 = {");
    for(int i = 0;i < L->length;i++){
        printf("%d", L->data[i]);
        if(i < L->length-1){
            printf(", ");
        }
    }
    printf("}\n");
    printf("长度 = %d\n", L->length);
    printf("容量 = %d\n", L->MaxSize);
    printf("\n");
}