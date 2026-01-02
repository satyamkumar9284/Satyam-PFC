#include <stdio.h>

int main() {
    float d , total_dis =0;
    for (int i = 1; i <= 30; i++) {
        printf("Enter distance walked on day %d (km): ", i);
        scanf("%f", &d);
        total_dis += d;
    }
    printf("\nTotal distance walked = %.2f km\n", total_dis);
    return 0;
}