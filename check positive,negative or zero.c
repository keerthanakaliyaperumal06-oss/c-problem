#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if (N>0){
        printf("POSITIVE");
    }
    else if (N<0){
        printf("NEGATIVE");
    }
    else{
        printf("ZERO");
    }
    return 0;
}