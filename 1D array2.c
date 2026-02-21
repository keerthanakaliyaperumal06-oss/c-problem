#include <stdio.h>
int main(){
    int size;
    int x;
    scanf("%d",&size);
    scanf("%d",&x);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[j]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}