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
    int max=0;
    int max1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int current=arr[i][j];
            if(current>max){
                max1=max;
                max=current;
            }
            else if(current>max1 && current<max){
                max1=current;
            }
        
        }
        
    }
    if(max1==0){
        printf("no second highest distinct salary found\n");
        printf("second highest salary:%d\n,max1");
    }
    return 0;
}