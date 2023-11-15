#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    bool isPalindrome = true;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    printf(isPalindrome ? "Palindrome\n" : "Not a Palindrome\n");
    return 0;
}
