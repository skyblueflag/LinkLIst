#include<stdio.h>
#include<stdlib.h>

void Display (LinkList L, int n) 
{
    for(int i= 0;i < n;i++) 
    {
        printf ("%d  ", L.data[i]) ;
    }
}