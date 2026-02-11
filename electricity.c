#include <stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int units;
    scanf("%d",&units);
    int bill;
    int a;
    switch(type){
        case 1:
          if(type == 1)
          {
           a=(100*3)+((units-100)*5);
           bill=a-80;
           printf("%d",bill);
           break;
          }
          
        case 2:
          if(type == 2)
          {
           a=(100*7)+((units-100)*10);
           printf("%d",a);
          }
          break;
        default:
          printf("invalid type");
}
return 0;


}