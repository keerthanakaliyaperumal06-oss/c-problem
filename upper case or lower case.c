#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("upper case letter");
    }
    else {
        printf("lower case letter");
    
    }
    return 0;
}