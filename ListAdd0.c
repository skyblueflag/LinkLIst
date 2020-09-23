/* 线性表增加元素操作 */
#include "List0.h"

//插入函数，elem为要插入的元素，addN为要插入线性表中的位置
table AddTable(table t, int elem, int addN){
    /* 判断插入位置，若超出线性表的长度或小于1,提示插入位置错误并返回空表退出 */
    if(addN > t.length || addN < 1){
        printf("查询的位置不存在！\n");
        printf("插入的位置有误！\n");
        return t;
    }
    /* 判断线性表空间是否已满，若已满则需要申请空间 */
    if(t.length == t.size){
        t.head = (int*)realloc(t.head, (t.size+1)*sizeof(int));
        //若分配空间失败
        if(!t.head){
            printf("分配空间失败！\n");
            return t;
        }
        t.size += 1;
    }
    /* 申请空间成功后，插入操作,将要插入的位置后的元素后移 */
    for(int i = t.length -1;i > addN -1;i--){
        t.head[i+1] = t.head[i];
    }
    /* 完成插入位置后的元素后移操作后，将要插入的元素添加到相应位置 */
    t.head[addN - 1] = elem;
    //线性表长度+1
    t.length++;
    return t;
}