#include <stdio.h>
int main() {
    int units;
    float bill;
    
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    
    // Simplified Slabs:
    if (units <= 100) {
        // Flat rate for low consumption
        bill = units * 1.50; // $1.50 per unit
    } else if (units <= 300) {
        // Higher rate for medium consumption
        // Base charge for first 100 units is $150.00
        bill = 150.00 + (units - 100) * 2.50; // $2.50 per unit for the rest
    } else {
        // Highest rate for high consumption
        // Base charge for first 300 units: 150.00 + (200 * 2.50) = $650.00
        bill = 650.00 + (units - 300) * 4.00; // $4.00 per unit for the rest
    }
    
    printf("\nTotal Bill Amount: %.2f\n", bill);
    
    return 0;
}