#include <stdio.h>
int main() {
    int age, count=0;
    for (int i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d",&age);
        if (age>=30){
            count += 1;
        }
        
    }
    
    printf("\nEmployees aged 30 or above =%d",count);
    
    return 0;
}