#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int delay_in_hours;
    int i=0;
    int count=0;
    int delayed_days=0;
    int total_delay=0;
    while(i<=N){
        scanf("%d",&delay_in_hours);
        total_delay=total_delay+delay_in_hours;
        if(delay_in_hours>2){
            delayed_days++;
        }
        i++;
        printf("total_delay:%d\n",total_delay);
        printf("delayed_days:%d\n",delayed_days);
        return 0;
    }
}