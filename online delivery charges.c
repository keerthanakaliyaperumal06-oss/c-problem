#include <stdio.h>
int main(){
    int speedtype;
    int orderamount;
    int deliverycharge=0;
    scanf("%d",&orderamount);
    scanf("%d",&speedtype);
    switch(speedtype){
        case 1:
         
            printf("deliverycharge == 50");
         
         break;
        case 2:
         if(orderamount < 1000){
            printf("deliverycharge == 100");
         }
         else if("orderamount >= 1000"){
            printf("deliverycharge == free");
         }
         break;
         default:
          printf("invalid speedtype");
         }
         return 0;
         
         }
    
    
