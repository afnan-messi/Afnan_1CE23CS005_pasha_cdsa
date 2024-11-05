#include<stdio.h>
int main()
{
    float eng,phy,chem;
    float total,average,percentage;
    printf("enter the marks of three subjects:\n");
    scanf("%f%f%f",&eng,&phy,&chem);
    total=eng+phy+chem;
    average= total/3.0;
    percentage=((float)total/300.0)*100;
    printf("total marks=%.2f\n",total);
    printf("average marks=%.2f\n",average);
    printf("percentage=%.2f",percentage);
    return 0; 
}