#include <stdio.h>
int main()
{
    float balance, interest, maintenance, bonusfactor;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);
    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %f\n", balance);
    printf("Enter annual maintenance charge: ");
    scanf("%f", &maintenance);
    balance -= maintenance;
    printf("Balance after deducting maintenance charge: %f\n", balance);
    printf("Enter bonus factor: ");
    scanf("%f", &bonusfactor);
    balance *= bonusfactor;
    printf("Balance after applying bonus factor: %f\n", balance);
    balance /= 2;
    printf("Balance after dividing into two linked accounts: %f\n", balance);
    return 0;
}