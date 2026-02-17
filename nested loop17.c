#include <stdio.h>
int main(){
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("%c",'A'+k);
        }
        for(int k=i-2;k>=0;k--){
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}