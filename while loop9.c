#include <stdio.h>
int main(){
    int fuel,N;
    scanf("%d", &fuel);
    scanf("%d", &N);
    int trips[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&trips[i]);
    }
    int i=0;
    int completedTrips=0;
    while(i<N){
        if(fuel>=trips[i]){
            fuel-=trips[i];
            completedTrips++;
        } 
        else{
            break;
        }
        i++;
    }
    printf("Completed Trips:%d\n",completedTrips);
    printf("Remaining Fuel:%d\n",fuel);
    return 0;
}