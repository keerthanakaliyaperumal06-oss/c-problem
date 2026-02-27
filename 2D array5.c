#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int minindex = 0;
    float minavg = 0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        float avg=(float)sum / c;

        if(i==0 || avg<minavg){
            minavg=avg;
            minindex=i;
        }
    }

    printf("%d", minindex);
    return 0;
}
