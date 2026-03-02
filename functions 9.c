#include <stdio.h>
int isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    
    while(num != 0)
    {
        reversed = reversed * 10 + (num % 10);
        num = num / 10;
    }
    
    if(original == reversed)
        return 1;   
    else
        return 0;   
}

int main()
{
    int N;
    scanf("%d", &N);
    
    if(isPalindrome(N))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}

