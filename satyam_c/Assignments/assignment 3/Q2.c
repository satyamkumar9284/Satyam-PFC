#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 0; i < 7; i++) {
        
        // S
        for (j = 0; j < 5; j++) {
            if (
                ((i == 0 || i == 3 || i == 6) && (j > 0 && j < 4)) ||
                (j == 0 && (i > 0 && i < 3)) ||
                (j == 4 && (i > 3 && i < 6))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // A
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && i != 0) ||
                ((i == 0 || i == 3) && (j > 0 && j < 4))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // T
        for (j = 0; j < 5; j++) {
            if (i == 0 || j == 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // Y
        for (j = 0; j < 5; j++) {
            if (
                ((j == i || j == 4 - i) && i < 3) ||
                (j == 2 && i >= 3)
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // A
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && i != 0) ||
                ((i == 0 || i == 3) && (j > 0 && j < 4))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // M
        for (j = 0; j < 5; j++) {
            if (
                j == 0 || j == 4 ||
                ((j == i || j == 4 - i) && i <= 2)
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}