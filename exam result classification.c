#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    int attendence;
    scanf("%d",&attendence);
    int examresult;
    if(attendence < 75){
        printf("fail");
    }
    else if(marks >= 75){
        printf("distinction");
    }
    else if(marks >= 50){
        printf("pass");
    }
    else {
        printf("fail");
    } 
    
    return 0;
}        
    