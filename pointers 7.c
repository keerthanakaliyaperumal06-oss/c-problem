#include <stdio.h>
int main(){
    char str[100];
    char *start,*end;
    int length=0;
    int palindrome=1;
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    start=str;
    end=str+length-1;
    while(start<end){
        if(*start!=*end){
            palindrome=0;
            break;
        }
        start++;
        end--;
    }
    if(palindrome){
        printf("yes");
    }
    else{
        printf("no");
}
return 0;
}