/* 线性表查询元素操作 */
#include"List0.h"

//查询数据，elem为要查询的数据
int SearchDataTable(table t, int elem){
    for(int i = 0;i < t.length;i++){
        if(t.head[i] = elem){
            printf("存在该数据！\n");
            printf("该数据在线性表中的位置为%d\n", i+1);
            return i+1;
        }
        else{
            printf("不存在该数据！\n");
        }
    }
    //若查找失败,返回0
    return 0;
}

//查询指定位置的元素,n为指定的位置
int SearchPlaceTable(table t, int n){
    //判断该位置的存在情况,若不存在，返回0
    if(n > t.length || n < 1){
        printf("查询的位置不存在！\n");
        return 0;
    }
    //若找到该位置
    for(int i = n -1;i < t.length;i++){
        if(i = n -1){
            printf("存在该位置！\n");
            printf("该位置的元素为：%d\n", t.head[i]);
        }
    }
    //查询成功，返回1
    return 1;
}