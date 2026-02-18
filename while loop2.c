#include <stdio.h>
int main(){
    int N;
    int initialBalance;
    scanf("%d", &N);
    scanf("%d", &initialBalance);
    long transaction;
    long balance = initialBalance;
    int lowBalanceDays = 0;
    int i = 0;
    while (i < N){
        scanf("%d", &transaction);
        balance += transaction;         
        if (balance < 2000) {
            lowBalanceDays++;
        }

        i++;

    }       
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowBalanceDays);
    return 0;
}



