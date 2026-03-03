#include <stdio.h>
int main() {
    char str[201];
    char *ptr;
    int count = 0;
    fgets(str,sizeof(str),stdin);
    ptr=str;
    if (*ptr!='\n' && *ptr!='\0') {
        count = 1;
    }
    while(*ptr!='\0') {
        if (*ptr==' ') {
            count++;
        }
        ptr++;
    }
    printf("%d",count);
    return 0;
}




