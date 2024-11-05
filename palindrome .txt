#include<stdio.h>
int main(){
    int num,reverse = 0,remainder,original;
    printf("enter the integer:");
    scanf("%d",&num);
    original = num;
    while(num!=0){
        remainder = num%10;
        reverse = reverse*10+remainder;
        num /=10;
    }
    if(original==reverse){
         printf("%d is palindrome",original);
    }
    else{
        printf("%d is not a palindrome",original);
    }
    return 0;
}