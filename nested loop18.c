#include <stdio.h>

int main() {
    for(int i=0;i<5;i++){
        for(int j=5-1-i;j<5;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}