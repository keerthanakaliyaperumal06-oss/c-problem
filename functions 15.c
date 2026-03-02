#include <stdio.h>

void printTable(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    printTable(num);

    return 0;
}