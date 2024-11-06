#include<stdio.h>
int binarytodecimal(int n){
    int decimalnumber=0;
    int base = 1;
    while (n>0){
        int lastdigit = n%10;
        decimalnumber += lastdigit*base;
        base *=2;
        n/=10;
    }
    return decimalnumber;
}
int main(){
    int binary;
    printf("enter the binary number:");
    scanf("%d",&binary);
    int decimalnumber=binarytodecimal(binary);
    printf("decimal equivalent:%d\n",decimalnumber);
    return 0;
}