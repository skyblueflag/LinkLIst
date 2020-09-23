/* 输出线性表 */
#include"List0.h"

void DisplayTable(table t){
    printf("{ ");
    for(int i = 0;i < t.length;i++){
        printf("%d", t.head[i]);
        for(int j = 0;j < t.length -1;j++){
            printf(", ");
        }
    }
    printf(" }\n");
}