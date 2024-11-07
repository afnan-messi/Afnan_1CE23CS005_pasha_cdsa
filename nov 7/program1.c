#include<stdio.h>
void main(){
    int x,y,*pointer,pointer1;
    x=22;
    pointer=&x;
    y=*pointer;
    printf("value of x %d",x);
    printf("value of y %d",y);
    printf("adress of x %p",pointer);
    printf("adress of y %p",pointer1);
}