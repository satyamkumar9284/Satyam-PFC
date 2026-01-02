#include <stdio.h>

int findSquare(int num) {
    return num * num;
}

int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    result = findSquare(n);
    printf("The square of %d is %d\n", n, result);
    
    return 0;
}