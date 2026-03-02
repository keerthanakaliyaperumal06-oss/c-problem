#include <stdio.h>
int main(){
    char str1[50];
    fgets(str1,sizeof(str1),stdin);
    char str2[50];
    char *ptr=str1,*ptr1=str2;
    while(*ptr!='\0'){
        *ptr1=*ptr;
        ptr++;
        ptr1++;
        
        
    }
    *ptr1='\0';
    printf("%s",str2);
    return 0;

}