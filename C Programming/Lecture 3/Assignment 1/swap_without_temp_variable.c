#include<stdio.h>

int main() {
    float a,b;
    printf("Enter value of a:\n");
    scanf("%f",&a);
    printf("Enter value of b:\n");
    scanf("%f",&b);
    &a=&b;
    &b=&a;
    printf("After swapping, value of a =%0.2f\n",a);
    printf("After swapping, value of a =%0.2f\n",b);
    system("pause");
    return 0;
}