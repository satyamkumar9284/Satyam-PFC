#include <stdio.h>
int main() {
    int units, total_units=0;
    for (int i = 1; i<8; i++){
        printf("Enter units used on day %d: ",i);
        scanf("%d",&units);
        total_units += units;
    }

    printf("\nTotal electricity units used in a week =%d\n",total_units);
    
    
    return 0;
}