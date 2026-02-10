#include <stdio.h>
int main(){
    int class;
    scanf("%d",&class);
    int age;
    scanf("%d",&age);
    float fair;
    
    switch (class){
        case 1:
         fair=300;
         if (age < 12){
            printf("fair *= 0.5");
         }
         else if(age >= 60){
            printf("fair *= 0.67");
         }
         break;
        case 2:
         fair=1000;
         if (age < 12){
            printf("fair *= 0.5");
         }
         break;
       default:
         printf("invalid class");
         return 0;
    
         
    }
    




}