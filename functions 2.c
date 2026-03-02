#include <stdio.h>
int findmax(int a,int b){
    if(a>b)
        return a;
    
    else
        return b;
    
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=findmax(a,b);
    printf("%d",result);
    return 0;
}