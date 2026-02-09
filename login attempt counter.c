#include <stdio.h>
int main(){
    int attempts;
    scanf("%d",&attempts);
    if (attempts > 3){
        printf("Account locked");
    }
    else {
        printf("Login Allowed");
    }
    return 0;
}