#include <stdio.h>
int main(){
    int n,i;
    int price[100];
    int highest=0;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
        if(price[i]>highest){
            highest=price[i];
        }
        if(price[i]>100){
            count++;
        }
    }
    printf("%d\n",highest);
    printf("%d\n",count);
    return 0;
}