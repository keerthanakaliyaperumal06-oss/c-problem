#include <stdio.h>

long long int power(int base, int exponent)
{
    long long int result = 1;
    int i;

    for(i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    long long int ans = power(A, B);
    printf("%lld", ans);

    return 0;
}