#include<stdio.h>
#include<math.h>
int binaryToDecimal(int binary){
    int decimal=0,base=1,last_digit;
    while(binary>0){
        last_digit=binary% 10;
        binary=binary/10;
        decimal+=last_digit*base;
        base=base*2;

    }
    return decimal;
}
int main(){
    long long binary;
    printf("enter a binary number:");
    scanf("%lld",&binary);
    int decimal=binaryToDecimal(binary);
    printf("the decimal equivalent is:%d\n", decimal);
    return 0;
}