#include <stdio.h>
int main(){
    int max_weight;
    scanf("%d",&max_weight);
    int N;
    scanf("%d",&N);
    int passenger_weight;
    int i=1;
    int sum=0;
    int count=0;
    int passenger_allowed;
    while(i<=N){
        scanf("%d",&passenger_weight);
        sum=sum+passenger_weight;
        
        if(sum>max_weight){
            count++;
        }
        i++;
    }
    if(sum>max_weight){
        printf("overload:yes\n");
    }
    else{
        printf("overload:no");
    }
    passenger_allowed=N-count;
    printf("\n%d",passenger_allowed);
    return 0;

}