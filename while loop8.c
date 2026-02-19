#include<stdio.h>
int main(){
    int N;
    int consective; 
    int i=1;
    int count_1=0;
    int max =0;
    scanf("%d",&N);
    while(i<=N){
        scanf("%d",&consective);

        if(consective==0){
          count_1++;

        }
        else if(consective==1){
            if(count_1>max){
               max=count_1;
            }
            count_1=0;
           
        }
    
        i++;
    } 
    if(count_1>max){
        max=count_1;
    }
    printf("Longest Default Streak : %d",max);
    return 0;
    }