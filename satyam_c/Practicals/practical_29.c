#include <stdio.h>

void calculateGrade(float avg) {
    printf("Average: %.2f\n", avg);
    if (avg >= 90) printf("Grade: A\n");
    else if (avg >= 80) printf("Grade: B\n");
    else if (avg >= 70) printf("Grade: C\n");
    else if (avg >= 60) printf("Grade: D\n");
    else printf("Grade: F\n");
}

int main() {
    float m1, m2, m3, total, average;
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    
    total = m1 + m2 + m3;
    average = total / 3;
    
    calculateGrade(average);
    
    return 0;
}