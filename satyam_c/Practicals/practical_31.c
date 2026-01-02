#include <stdio.h>

int findMax(int *n1, int *n2) {
    return (*n1 > *n2) ? *n1 : *n2;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Maximum is: %d\n", findMax(&x, &y));
    
    return 0;
}