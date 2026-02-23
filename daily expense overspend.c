#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int expense;
    int total=0;
    int overspenddays=0;
    for(int i=0;i<N;i++){
        scanf("%d",&expense);
        total+=expense;
        if(expense>1000){
            overspenddays++;
        }
    }
    printf("total expense:%d\n",total);
    printf("overspend days:%d\n",overspenddays);
    return 0;
}