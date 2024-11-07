#include<stdio.h>
#include<stdlib.h>
void update(int*a,int*b){
    int sum=*a+*b;
    int abs_diff=abs(*a-*b);
    *a=sum;
    *b=abs_diff;

}
int main(){
    int x,y;
    printf("enter two integer:");
    scanf("%d%d",&x,&y);
    update(&x,&y);
    printf("updated values:%d%d\n",x,y);
    return 0;
}
