#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1 for Mon, 2 for Tue, ..., 6 for Sat): ");
    scanf("%d", &day);

    printf("Schedule: ");
    switch (day) {
        case 1:
            printf("Monday: Mathematics and Physics Lecture.\n");
            break;
        case 2:
            printf("Tuesday: Chemistry Lab and English.\n");
            break;
        case 3:
            printf("Wednesday: Computer Science and Electronics.\n");
            break;
        case 4:
            printf("Thursday: Engineering Drawing and Workshop.\n");
            break;
        case 5:
            printf("Friday: Environmental Science and Humanities.\n");
            break;
        case 6:
            printf("Saturday: Sports and Extra-curricular activities.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 6.\n");
    }

    return 0;
}