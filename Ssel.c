#include"Slist.h"

//线性表查询操作
int SelectTable(table t, int n){
    if(n > t.length || n < 1){
        printf("位置错误！\n");
        return 0;
    }
    printf("%d", t.data[n -1]);
    int e = t.data[n -1];
    return e;
}