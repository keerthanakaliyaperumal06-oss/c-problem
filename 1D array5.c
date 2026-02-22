#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int sum=0;
    int arr[size-1];
    for(int i=0;i<size-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++){
        sum=sum+arr[i];
    }
    int expectedsum=size*(size+1)/2;
    int missing=expectedsum-sum;
    printf("%d",missing);
    return 0;
}