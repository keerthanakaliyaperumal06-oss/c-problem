#include <stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int words=0;
    

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
            words=count+1;
            
        }

    }
   
    
    printf("%d",words);
    return 0;
}