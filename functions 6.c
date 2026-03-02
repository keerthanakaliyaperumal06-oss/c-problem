#include <stdio.h>
int findfact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=findfact(n);
    printf("%d",result);
    return 0;
}