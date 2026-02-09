#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if (age >= 18){
        printf("eligible for vote");
    }
    else {
        printf("not eligible for voting");
    }
    return 0;

}
