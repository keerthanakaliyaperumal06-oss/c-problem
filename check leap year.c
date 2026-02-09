#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%4){
        printf("LEAP YEAR");
    }
    else if (n%400){
        printf("LEAP YEAR");
    }
    else {
        printf("NOT A LEAP YEAR");
    }
    return 0;
}