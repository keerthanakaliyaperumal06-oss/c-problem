#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<=5-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=9;i>0;i-=2){
        for(int k=9;k>i;k-=2){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
