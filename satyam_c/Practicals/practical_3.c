#include<stdio.h>
int main(){
    int a=5;
    float b=1.23;
    char c='a';
    double d=12345.46789;
    printf("var1=%d\n",a);
    printf("size of var1=%d\n",sizeof(a));
    printf("var2=%f\n",b);
    printf("size of var2=%d\n",sizeof(b));
    printf("var3=%c\n",c);
    printf("size of var3=%d\n",sizeof(c));
    printf("var4=%lf\n",d);
    printf("size of var4=%d\n",sizeof(d));
    return 0;
}