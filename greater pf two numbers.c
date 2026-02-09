#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("a is greater");
    }
    else if(a<b){
        printf("b is greater");
    }
    else {
        printf("EQUAL");
    }
    
    return 0;
}