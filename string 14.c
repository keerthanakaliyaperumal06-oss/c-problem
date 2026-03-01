#include <stdio.h>
int main(){
    char str1[20];
    fgets(str1,sizeof(str1),stdin);
    char str2[20];
    fgets(str2,sizeof(str2),stdin);
    int i=0;
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]==str2[i]){
            str2[i]!='\0';
            i++;
    }
}
    
    printf("%s",str2);
    return 0;
}