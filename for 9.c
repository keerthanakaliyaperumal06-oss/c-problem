#include <stdio.h>
int main() {
    int N, count = 0;
    scanf("%d", &N);
    for (int i=1; N != 0; N = N / 10) {
        count++;
    }
    printf("%d", count);
    return 0;
}

