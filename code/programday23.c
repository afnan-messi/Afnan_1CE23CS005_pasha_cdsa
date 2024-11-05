#include<stdio.h>
int main()
{
    int N, sum =0;
    printf("enter the value of N:");
    scanf("%d",&N);
    for(i = 0;i <= N;i++)
    {
        sum+=i;
    }
    printf("sum of the series is:%d\n",sum);
    return 0;
}