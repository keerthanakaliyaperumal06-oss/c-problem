#include <stdio.h>
int main(){
    int accounttype;
    scanf("%d",&accounttype);
    int years;
    scanf("%d",&years);
    int interest;
    switch(accounttype){
        case 1:
         printf("interest = 4");
         break;
        case 2:
         if(years <= 3){
            printf("interest = 5");
         }
         else {
            printf("interest = 7");
         }
         break;
        default:
         printf("invalid accounttype");
    }
    return 0;
}