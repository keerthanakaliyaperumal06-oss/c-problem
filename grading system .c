#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);

    if (marks >= 91 && marks <= 100){
        printf("GRADE A");
    }
    else if (marks >= 81 && marks <= 90){
        printf("GRADE B");
    }
    else if (marks >= 71 && marks <= 80){
        printf("GRADE C");
    }
    else if (marks >= 61 && marks <= 70){
        printf("GRADE D");
    }
    else if (marks >= 51 && marks <= 60){
        printf("GRADE E");
    }
    else if (marks >= 41 && marks <= 50){
        printf("GRADE G");
    }
    else if(marks >= 31 && marks <= 39){
        printf("SUPPLEMEMTAY");
    }
    else {
        printf("fail");
    }
    return 0;
}
    