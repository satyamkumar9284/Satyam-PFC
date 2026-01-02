#include<stdio.h>
int main(){
    int i,j,a;
    for(i=1;i<6;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(a=1;a<=i;a++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}