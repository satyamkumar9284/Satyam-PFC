#include <stdio.h>
int main() {
    int color_code;
    printf("Enter the traffic light color number:\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Input (1, 2, or 3): ");
    scanf("%d", &color_code);
    // Use a switch statement to evaluate the color code
    switch (color_code) {
        case 1:
            printf("\nAction: STOP\n");
            break;
        case 2:
            printf("\nAction: READY\n");
            break;
        case 3:
            printf("\nAction: GO\n");
            break;
        default:
            printf("\nError: Invalid input. Please enter 1, 2, or 3.\n");
            break;
    }
    return 0;
}