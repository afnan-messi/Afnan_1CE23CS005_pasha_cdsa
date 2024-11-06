#include<stdio.h>
#include<string.h>
    int isPalindrome(char str[]){
        int length=strlen(str);
        for(int i=0;i<length/2;i++){
            if(str[i]!=str[length-i-1]){
                return 0;

            }
        }
        return 1;
    }
    int main(){
        char str[100];
        printf("enter a string:");
        scanf("%s",str);
        if(isPalindrome(str)){
            printf("the string is a palindrome.\n");

        }else{
            print("the string is not a palindrome.\n");
        }
        return 0;
    }