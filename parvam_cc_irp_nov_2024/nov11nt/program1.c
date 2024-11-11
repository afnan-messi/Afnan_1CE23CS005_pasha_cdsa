#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0){
    printf("it is an even number:");
    }else{
        printf("it is a odd number:");
    }
    return 0;
}