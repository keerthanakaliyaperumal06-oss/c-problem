#include <stdio.h>
int main(){
    int loantype;
    scanf("%d",&loantype);
    int creditscore;
    scanf("%d",&creditscore);
    switch(loantype){
        case 1:
          if(creditscore >= 700){
            printf("approved");
          }
          else if(creditscore >= 650 && creditscore <= 699){
            printf("manual review");
          }
          break;
        case 2:
          if(creditscore >= 700){
            printf("approved");
          }
          else if(creditscore < 700){
            printf("rejected");
          }
          break;
        default:
          printf("invalid loantype");
    }
    return 0;
}