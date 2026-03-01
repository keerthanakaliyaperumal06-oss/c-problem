#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    int isPalindrome = 1;
    printf("Enter product code: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        length--;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}