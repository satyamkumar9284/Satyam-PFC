#include <stdio.h>
int main()
{
    char a[50];
    float b,HRA, DA, GA, In_T, N_S;
    printf("Emp. Name:");
    scanf("%s", a);
    printf("Basic Salary:");
    scanf("%f", &b);
    HRA=0.2*b;
    DA=0.1*b;
    GA=b+HRA+DA;
    In_T=0.05*GA;
    N_S=GA-In_T;
    printf("House Rent Allowance(HRA):%f\n", HRA);
    printf("Dearness Allowance(DA):%f\n", DA);
    printf("Gross Salary:%f\n", GA);
    printf("Income Tax:%f\n", In_T);
    printf("Net Salary:%f\n", N_S);
    return 0;
}