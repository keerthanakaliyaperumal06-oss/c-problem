#include <stdio.h>
int oddoreven(int a){
    if(a%2==0)
      printf("even");
    else 
      printf("odd");
}
int main(){
    int a;
    scanf("%d",&a);
    int result=oddoreven(a);
    printf("%d",result);
    return 0;
}