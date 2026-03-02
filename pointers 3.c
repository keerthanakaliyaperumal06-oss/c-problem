#include <stdio.h>
int main(){
    char str[120];
    fgets(str,sizeof(str),stdin);
    int count=0;
    char *ptr;
    ptr=str;
    for(int i=0;*ptr!='\0';i++){
        char ch=*ptr;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            count++;
        }
        ptr++;
    }
    printf("%d",count);
    return 0;
}