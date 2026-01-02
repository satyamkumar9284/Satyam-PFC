#include <stdio.h>

int main() {
    int choice = -1; // Initialize with a non-zero value
    int num, i;

    while (choice != 0) {
        printf("\n--- MENU ---");
        printf("\n1. Print Multiplication Table");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } else if (choice != 0) {
            printf("Invalid choice! Try again.\n");
        }
    }
    printf("Exiting program...\n");
    return 0;
}