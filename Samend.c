#include"Slist.h"

table AmendTable(table t, int num, Elements temp){
    for(int i = 0;i < t.length;i++){
        if(t.data[i] == num){
            t.data[i] = temp;
        }
    }
    return t;
}