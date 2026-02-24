#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int units;
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&units);
        total+=units;
    }
    printf("total units:%d\n",total);
    return 0;
}