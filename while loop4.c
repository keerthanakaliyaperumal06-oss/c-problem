#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int status[n];
    int i = 0;
    while(i < n){
        scanf("%d", &status[i]);
        i++;
    }
    int current_streak = 0;
    int max_streak = 0;
    i = 0;
    while(i < n) {
        if(status[i] == 0){
            current_streak++;
            if(current_streak > max_streak){
                max_streak = current_streak;
            }
        } 
        else {
            current_streak = 0;  
        }
        i++;
    }

    printf("Longest Failure Streak: %d", max_streak);

    return 0;
}