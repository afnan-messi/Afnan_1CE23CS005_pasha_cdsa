#include<stdio.h>
#include<string.h>
void removeCharacter(char str[],char ch){
    int i,j=0;
    int length=strlen(str);
    for(i=0;i<length;i++){
        if(str[i]!=ch){
            str[j++]=str[i];

        }
    }
    str[j]='\0';
}
int main(){
    char str[100];
    char ch;
    printf("enter a string:");
    scanf("%s",str);
    printf("enter the character to remove:");
    scanf("%c",&ch);
    removeCharacter(str,ch);
    printf(" modified string:%s\n",str);
    return 0;
    
}