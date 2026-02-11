#include <stdio.h>
int main(){
    int plantype;
    scanf("%d",&plantype);
    float dataused;
    scanf("%f",&dataused);
    switch(plantype){
        case 1:
         if(dataused <= 1){
            printf("normal speed");
         }
         else if(dataused > 1){
            printf("speed reduced");
         }
        break;
        case 2:
         if(dataused <= 2){
            printf("normal speed");
         }
         else if(dataused > 2){
            printf("extra charges applied");
         }
        break;
        default:
         printf("invalid plantype");

    }
    return 0;
}