#include <stdio.h>
#include <string.h>
int main(){
    char name[50],a[50]="admin";
    int password,b=1234;
    printf("Enter user name:");
    scanf("%s", name);
    printf("Enter password:");
    scanf("%d", &password);
    if ((strcmp(name,a)==0) && (password==b)){
        printf("Login Successful");
    }
    else{
        printf("Invalid user name or password");
    }
    return 0;
}