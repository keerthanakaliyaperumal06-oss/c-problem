#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);//10%3=1
                         //25%5=0
                         //7%4=3
    int c=a%b;
    printf("%d",c);
     
    

    return 0;
}