#include <stdio.h>
int main() {
    int month, year;
    printf("Enter the month number (1 for Jan, 12 for Dec): ");
    scanf("%d", &month);
        switch (month) {
        // Months with 31 days: January (1), March (3), May (5), July (7), August (8), October (10), December (12)
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\nMonth %d has 31 days.\n", month);
            break;
        // Months with 30 days: April (4), June (6), September (9), November (11)
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\nMonth %d has 30 days.\n", month);
            break;
        // February (2) - Requires leap year check for 28 or 29 days
        case 2:
            printf("Enter the year: ");
            scanf("%d", &year);
            if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
                printf("\nMonth 2 (February) in %d has 29 days (Leap Year).\n", year);
            } else {
                printf("\nMonth 2 (February) in %d has 28 days.\n", year);
            }
            break;
    }
    return 0;
}