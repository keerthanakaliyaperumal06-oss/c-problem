#include <stdio.h>
int findsum(int a){
    int sum=0;
    while(a>0){
    sum=sum+(a%10);
    a=a/10;
    }
    return sum;
}
int main(){
    int a;
    scanf("%d",&a);
    int result=findsum(a);
    printf("%d",result);
    return 0;
}