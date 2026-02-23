#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int withdrawal;
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&withdrawal);
        total+=withdrawal;
    }
    if(total>10000){
        printf("limit exceeded\n");
    }
    
    else{
        printf("approved\n");
    }
    return 0;
}