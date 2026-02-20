#include<stdio.h>
int main(){
    int cash;
    int n;
    scanf("%d %d",&cash,&n);
    int successfulwithdrawal=0;
    int remainingcash=0;
    int i=0;
    int withdrawalamounts;
    while(i<n){
        scanf("%d",&withdrawalamounts);
        if(cash>=withdrawalamounts){
           cash=cash-withdrawalamounts;
           remainingcash++;
        }
        else{
            break;
        }
        i++;
    }
    printf("successful withdrawal:%d\n",remainingcash);
    printf("remaining cash:%d\n",cash);
    return 0;
}