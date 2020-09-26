#ifndef LIST0_H
#define LIST0_H
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ERROR 0
#define TRUE 1
#define OK 1

typedef int Elements;
typedef int Status;
typedef struct SqList{
    Elements *data;  //指向顺序表第一个元素
    int length;   //顺序表长度
    int listsize; //最大容量
}table;

//初始化线性表
Status InitList0(table *);

//申请新空间
void NewBase(table*);

//参数合法性检测
void ParameterDetection(table*);

//添加数据到线性表
Status AddList0(table *, int, Elements);

//插入元素到线性表
Status InsertList0(table*, int, Elements);

//删除数组尾部
Status DelTailList0(table*);

//删除数组全部元素
Status DeleteAllList0(table*);

//重置线性表
Status ResetAllList0(table*);

//删除线性表中的指定数据
Status DelDaList0(table *, Elements);

//删除线性表中指定位置的数据
Status DelLocList0(table*, int);

//查询线性表中的指定数据
Status SelDaList0(table *, Elements);

//查询线性表中指定位置的数据
Status SelLocList0(table *, int);

//修改线性表中的指定数据
Status AmendDaList0(table *, Elements, Elements);

//修改线性表中指定位置的数据
Status AmendLocList0(table*, int, Elements);

//输出打印线性表
void DisplayList0(table *);

#endif // LIST0_H
