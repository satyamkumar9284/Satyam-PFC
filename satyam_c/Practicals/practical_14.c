#include <stdio.h>

int main() {
    char ch;

    // input
    printf("Enter a single character: ");
    scanf(" %c", &ch); // Note the space before %c to consume potential whitespace

    // Check if it's an Alphabet (A-Z or a-z)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("'%c' is an Alphabet.\n", ch);
    } 
    // Check if it's a Digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    } 
    // If it's neither an alphabet nor a digit, it must be a Special Character
    else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}