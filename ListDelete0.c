/* 线性表删除操作 */
#include"List0.h"

//删除指定元素，delN为要删除的元素
table DeleteDataTable(table t, int delN){
    /* 判断线性表中是否存在该数据 */
    for(int i = 0;i < t.length;i++){
        if(t.head[i] != delN){
            printf("不存在该数据！\n");
        }
        return t;
    }
    for(int i = 0;i < t.length;i++){
        if(t.head[i] = delN){
            t.head[i - 1] = t.head[i];
            t.length--;
        }
    }
    return t;
}

//删除指定位置的元素，locN为指定的位置
table DeletePlaceTable(table t, int locN){
    //判断该位置的情况,若超出线性表长度或小于1
    if(locN > t.length || locN < 1){
        printf("查询的位置不存在！\n");
        printf("被删除元素的位置有误！\n");
        return t;
    }
    /* 判断位置无误后，进行删除操作 */
    for(int i = locN;i < t.length;i++){
        t.head[i -1] = t.head[i];
    }
    t.length--;
    return t;
}