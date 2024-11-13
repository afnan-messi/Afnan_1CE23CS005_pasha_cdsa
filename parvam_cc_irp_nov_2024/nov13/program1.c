#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    size_t len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';

    }
    for(int i =0;i<len;i++){
        if(i%2==0){
            str[i]='1';

        }else{
            str[i]='0';
        }
    }
    printf("modified string:%s\n",str);
    
    return 0;
}