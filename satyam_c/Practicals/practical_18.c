#include <stdio.h>
int main() {
    float totalBill;
    float price;
    for (int i = 1; i <= 5; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f",& price);
        totalBill += price;
    }
    
    printf("\nTotal Bill = %.2f\n", totalBill);
    
    return 0;
}