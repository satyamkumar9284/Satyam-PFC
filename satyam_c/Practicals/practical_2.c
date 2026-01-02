#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("numbers after swapping:\na=%d,b=%d",a,b);
    return 0;

}