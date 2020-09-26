/* 线性表增加数据方法实现 */
#include "list0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//申请新的空间，用于地址操作以便交换数据
void NewBase(table *L){
    //参数合法性检测
    if(NULL == L){
        printf("参数错误！\n");
        return;
    }
    //判断容量是否已满
    if(L->length == L->listsize){
        //容量变大
        L->listsize += 10;
        //申请新的空间
        Elements *p = (Elements*)malloc(sizeof(Elements)*L->listsize);
        //初始化新的空间
        memset(p, 0, sizeof(Elements)*L->listsize);
        //若申请空间失败
        if(!p)
            exit(ERROR);
        //分配空间成功后，把原数据赋给新空间
        for(int i = 0;i < L->length;i++){
            p[i] = L->data[i];
        }
        //将原空间释放
        free(L->data);
        //将数组头指针指向新空间
        L->data = p;
    }
}

//线性表添加元素,n为要添加的位置，e为要加入的数据,n参数可删除
Status AddList0(table *L, int n, Elements e){
    //若i的位置超出线性表长度或<1
    if(n < 1 || n > L->length +1)
        return  ERROR;
    //申请新的空间
    NewBase(L);
    //把要添加的数据装入空间
    L->data[L->length] = e;
    //线性表长度+1
    L->length++;
    return  OK;
}

//插入元素到线性表,n为要插入的位置,e为要插入的数据
Status InsertList0(table* L, int n, Elements e){
    //申请新的空间
    NewBase(L);
    //如果下标过大,将下标固定为数组的最后一个下标
    if(n > L->length){
        n = L->length;
    }
    //将插入位置后的数据后移
    for(int i = L->listsize;i >= n;i--){
        L->data[i] = L->data[i -1];
    }
    //将要插入的数据赋值到指定位置
    L->data[n] = e;
    //数量+1
    L->length++;
    return TRUE;
}
