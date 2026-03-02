#include <stdio.h>
int Prime(int num)
{
    if(num <= 1)
        return 0;   
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;   
    }

    return 1;   
}
int main()
{
    int N;
    scanf("%d", &N);
    
    if(Prime(N))
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}

