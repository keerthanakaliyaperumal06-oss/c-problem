
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[size-1];
    printf("%d",max);
    for(int i=size-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            printf("%d ",max);
        }

    }
    return 0;
}