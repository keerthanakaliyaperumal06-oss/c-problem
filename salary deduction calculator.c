#include <stdio.h>
int main(){
    int salary,absentdays;
    scanf("%d",&salary);
    scanf("%d",&absentdays);
    int deduction=absentdays*100;
    int finalsalary=salary-deduction;
    printf("final salary:%d\n",finalsalary);
    return 0;
}