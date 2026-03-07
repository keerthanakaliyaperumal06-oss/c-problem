#include <stdio.h>
int main(){
    float weight,cost;
    scanf("%f",&weight);
    if(weight<=5){
        cost=weight*5;
    }
    else if(weight<=10){
        cost=weight*7;
    }
    else{
        cost=weight*10;
    }
    printf("%.2f",cost);
    return 0;
}