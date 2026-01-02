#include <stdio.h>
int main(){
    float acc_1, acc_2;
    printf("\n\n\nEnter first account balance:");
    scanf("%f", &acc_1);
    printf("Enter second account balance:");
    scanf("%f", &acc_2);
    int equal = (acc_1==acc_2);
    int first_greater = (acc_1>acc_2);
    int second_greater = (acc_2>acc_1);
    printf("COMPARISON");
    printf("\nBoth account balance are equal:%d", equal);
    printf("\nFirst is greater:%d", first_greater);
    printf("\nSecond is greater:%d", second_greater);
    return 0;
}