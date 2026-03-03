#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *start,*end,temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}