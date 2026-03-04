#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int revenue;
    long long totalRevenue = 0;   
    int targetDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &revenue);

        totalRevenue += revenue;   
        if(revenue > 50000) {      
            targetDays++;
        }
    }
    printf("Total Revenue: %lld\n",totalRevenue);
    printf("Target Days: %d\n",targetDays);

    return 0;
}