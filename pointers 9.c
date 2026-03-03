#include <stdio.h>
int main() {
    int n, x;
    int arr[100];
    int *ptr;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }
    scanf("%d", &x);
    ptr = arr;   
    int position = 1;
    while(ptr < arr + n) {
        if(*ptr == x) {
            printf("%d", position);
            return 0;
        }
        ptr++;
        position++;
    }
    printf("-1");
    return 0;
}

