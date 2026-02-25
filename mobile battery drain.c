#include <stdio.h>

int main() {
    int batteryPercent, N;
    scanf("%d", &batteryPercent);
    scanf("%d", &N);
    int drain;
    for(int i = 0; i < N; i++) {
        scanf("%d", &drain);
        batteryPercent -= drain;
    }
    if(batteryPercent < 0) {
        batteryPercent = 0;
    }
    printf("Remaining Battery: %d%%", batteryPercent);
    return 0;
}