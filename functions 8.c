#include <stdio.h>
int rev(int n){
    int rev=0;
    while(n>0){
        int dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=rev(n);
    printf("%d",result);
    return 0;
}