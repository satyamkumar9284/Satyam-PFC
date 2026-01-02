#include <stdio.h>

int main() {
    int num;

    // taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking for even or odd.
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}