#include <stdio.h>
int sumOfNatural(int num)
{
    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);
    int result = sumOfNatural(N);   
    printf("%d", result);
    return 0;
}

