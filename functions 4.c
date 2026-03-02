#include <stdio.h>
float calculateareaofcircle(float r){
    float area=3.14*r*r;
    return area;
}
int main(){
    float r;
    scanf("%f",&r);
    float result=calculateareaofcircle(r);
    printf("%.2f",result);
    return 0;
}