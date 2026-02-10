#include <stdio.h>
int main(){
    int accountType;
    int balance;
    int withdrawAmount;
    scanf("%d",&accountType);
    scanf("%d",&balance);
    scanf("%d",&withdrawAmount);
    switch (accountType){
        case 1:
         if (balance >= withdrawAmount){
            printf("transaction successful");
         }
         else {
            printf("insufficient balance");
         }
         break;
        case 2:
          if (withdrawAmount <= 5000){
            printf("transaction successful");
          }
         else{
            printf("limited exceeded");
          }
         break;
        default:
         printf("invalid account type");

    }
    return 0;

}