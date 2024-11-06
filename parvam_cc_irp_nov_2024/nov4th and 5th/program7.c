#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=10 && num<=20 && num ==0)
    {
        printf("valid\n");
        
    }
    else
    {
        printf("invalid\n");
    }
    return 0;
}