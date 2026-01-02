#include <stdio.h>

void getFactorial(int n, long long *res) {
    *res = 1;
    for (int i = 1; i <= n; i++) {
        *res *= i;
    }
}

int main() {
    int num;
    long long result;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        getFactorial(num, &result);
        printf("Factorial of %d is %lld\n", num, result);
    }
    
    return 0;
}