#include"Slist.h"

//初始化线性表
table InitTable(table t){
    t.data = malloc(sizeof(table) + 1);
    for(int i = 1;i <5;i++){
        t.data[i] = i;
    }
    t.length = 4;
    return t;
}