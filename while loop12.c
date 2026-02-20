#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int maximumusage=0;
    int surgehours=0;
    int i=0;
    int power;
    while(i<n){
        scanf("%d",&power);
        if(power>maximumusage){
            maximumusage=power;
        }
        if(power>5){
            surgehours++;
        }
        i++;
    }
    printf("max usage:%d\n",maximumusage);
    printf("surgehours:%d",surgehours);
    return 0;

}