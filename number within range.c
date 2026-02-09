#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n >= 10 && n <=20){
        printf("number is within range");
    }
    else {
        printf("number is not within range");
    }
    return 0;
}