#include <stdio.h>
float calculatesimpleinterest(int P,int R,int T){
    float SI;
    SI=(P*R*T)/100;
    return SI;
}
int main(){
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    float result=calculatesimpleinterest(P,R,T);
    printf("%.2f",result);
    return 0;
}