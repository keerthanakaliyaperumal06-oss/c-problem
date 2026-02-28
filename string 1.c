#include <stdio.h>
#include <string.h>
int main(){
    char str[]={"Venky123"};
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0;
}