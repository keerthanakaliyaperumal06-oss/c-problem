#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(alpha(str[i]) && 
           !(tolower(str[i])=='a' || 
             tolower(str[i])=='e' || 
             tolower(str[i])=='i' || 
             tolower(str[i])=='o' || 
             tolower(str[i])=='u'))
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}