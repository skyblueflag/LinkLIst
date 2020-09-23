/* 线性表更改操作 */
#include"List0.h"

//线性表更改指定的数据,elem为要更改的数据，NewElem为更改后的数据
table AmendTable(table t, int elem, int NewElem){
    //查询要更改的elem在线性表中的位置,并赋值给n
    int n = SearchDataTable(t, elem);
    //将NewElem替换到该位置
    t.head[n -1] = NewElem;
    return t;
}