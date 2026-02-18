#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int noise[N];
    int i=0;
    while(i<N){
       scanf("%d",&noise[i]);
       i++;
    }
    int violations=0;
    int current_streak=0;
    int longest_streak=0;
    i=0;
    while(i<N){
        if(noise[i]>70){
            violations++;
            current_streak++;
            if(current_streak>longest_streak){
                longest_streak=current_streak;
            }
        }else{
            current_streak=0;
        }
        i++;
    }
    printf("noise violations:%d\n",violations);
    printf("longest violations streak:%d\n",longest_streak);
    return 0;
}