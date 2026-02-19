#include<stdio.h>
int main(){
    int capacity;
    int N;
    int occupancy; 

    scanf("%d",&capacity);
    scanf("%d",&N);
    
    int i=1;
    int count=0;
    int sum=0;
   
    while(i<=N){
        scanf("%d",&occupancy);
        sum=sum+occupancy;
        
       if(sum>=capacity){
     
        count=count+1;
       }
       
        i++;
    }

    
    printf("Final Occupied Beds : %d\n",sum);
    printf("Critical Hours : %d",count);

    return 0;
}