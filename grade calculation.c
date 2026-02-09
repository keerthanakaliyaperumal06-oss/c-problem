#include <stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    if (score >= 75 && score < 90){
        printf("Grade B");
    }
    else {
        printf("Grade F");
    }
    return 0;
}