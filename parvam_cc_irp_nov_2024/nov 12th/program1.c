#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter two numbers(n1 and n2):");
    scanf("%d %d",&n1,&n2);
    if(n1++<n2){
         printf("enter the number %d and %d:\n",n1,n2);
         int i=n1+1;
         while(i<n2){
            printf("%d\t",i);
            i++;
         }         
    }else{
        printf("invalid number:n1 must be lesser than n2.\n");
    }
    return 0;
   
}