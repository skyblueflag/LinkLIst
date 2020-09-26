/* 线性表输出打印方法实现 */
#include <stdio.h>
#include <stdlib.h>
#include "list0.h"

void DisplayList0(table *L){
    printf("容量 = %d, 长度 = %d\n数组 = { ", L->listsize, L->length);
    int j;
    for(int i = 0;i < L->length;i++){
        printf("%d ", L->data[i]);
    }
    printf(" }\n");
}
