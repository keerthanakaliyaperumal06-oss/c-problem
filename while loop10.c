#include<stdio.h>
int main(){

    int N;
    int course;
    int i=1;
    int count_1=0;
    int count_2=0;
    scanf("%d",&N);
    
    while(i<=N){
        scanf("%d",&course);
        if(course==0)
        {
            count_1++;
        }
        else if(course>0)
        {
            count_2++;
        }

        i++;

    }
    printf("Inactive Weeks : %d\n",count_1);

    if(count_1>=count_2){
        printf("Risk Status : High");
    }
    else 
    {
        printf("Risk Status : Low");
    }
}