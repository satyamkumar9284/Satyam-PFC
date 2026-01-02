#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    // Check palindrome
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    // Output
    printf("\nOriginal String: %s", str);
    printf("\nReversed String: %s", rev);

    if (flag)
        printf("\nResult: The string is a Palindrome.");
    else
        printf("\nResult: The string is NOT a Palindrome.");

    return 0;
}