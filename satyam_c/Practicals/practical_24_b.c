#include <stdio.h>

int main() {
    int choice, num, i;

    do {
        printf("\n--- MENU ---");
        printf("\n1. Print Multiplication Table");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
        }
    } while (choice != 0);

    printf("Exiting program...\n");
    return 0;
}