#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], total = 0;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int left=0;
    for(int i=0;i<n;i++) {
        total-=arr[i];  // now total = right sum
        if(left==total) {
            printf("%d",i);
            return 0;
        }
        left+=arr[i];
    }

    printf("-1");
    return 0;
}


