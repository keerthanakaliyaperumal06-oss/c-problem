#include <stdio.h>

int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    int usage;
    int i = 0;
    int daysUsed = 0;
    while (i < N && totalData > 0) {
        scanf("%d", &usage);
        totalData -= usage;
        daysUsed++;
        if (totalData <= 0) {
            totalData = 0; 
            break;
        }

        i++;
    }
    while (i + 1 < N) {
        scanf("%d", &usage);
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}


