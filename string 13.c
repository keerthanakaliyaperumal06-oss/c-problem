#include <stdio.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    char target;
    scanf("%c",&target);
    int i=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==target){
            printf("%d",i);
            return 0;

        }
        
    }
    printf("-1");
    return 0;
}