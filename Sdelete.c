#include"Slist.h"

//线性表删除操作
table DeleteTable(table t, int n){
    if(n > t.length || n < 1){
        printf("位置错误！\n");
        return t;
    }
    for(int i = t.length;i > n-1;i--){
        t.data[i -1] = t.data[i];
    }
    t.length--;
    return t;
}