#include"Slist.h"

//增加元素到线性表
table AddTable(table t, int n, Elements e){
    if(n > t.length || n < 1){
        printf("位置错误！\n");
        return t;
    }
    t.data = (Elements*)malloc(sizeof(table)+1);
    for(int i = t.length;i > n - 1;i-- ){
        t.data[i+1] = t.data[i];
    }
    t.data[n -1] = e;
    t.length++;
    return t;
}