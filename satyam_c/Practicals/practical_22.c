#include <stdio.h>

int main() {
    int i, a, p = 0;
    for (i = 1; i <= 30; i++) {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &a);
        if (a == 1) {
            p++;
        }
    }
    printf("\nTotal present days = %d\n", p);
    return 0;
}
