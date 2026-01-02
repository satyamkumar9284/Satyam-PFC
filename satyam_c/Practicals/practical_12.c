#include <stdio.h>

int main() {
    int year;
    //input for the year
    printf("Enter a year: ");
    scanf("%d", &year);

    /* Check for a leap year using the official rules (divisible by 400 
    OR (divisible by 4 AND not divisible by 100))*/
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}