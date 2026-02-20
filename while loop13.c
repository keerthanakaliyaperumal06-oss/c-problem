#include<stdio.h>
int main(){
    int datapack;
    scanf("%d",&datapack);
    int N;
    scanf("%d",&N);
    int usage;
    int i=0;
    int exhaustedday=0;
    int overusedData=0;
    while (i<N) {
        scanf("%d",&usage);
        datapack=datapack-usage;
        if (datapack<=0) {
            exhaustedday=i++;
            overusedData=-datapack;
            break;
        }
        i++;
    }
    printf("exhausted_day:%d\n",exhaustedday);
    printf("over_used_data:%d\n",overusedData);
    return 0;
}