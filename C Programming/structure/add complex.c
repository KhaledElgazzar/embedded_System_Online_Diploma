/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Number {
    float real;
    float im;
};

struct Number addComplex(struct Number x, struct Number y)
{
    struct Number z;
    z.real =x.real+y.real;
    z.im =x.im+y.im;
    return z;
}

int main()
{
    struct Number x,y,z;
    printf("Enter first real number");
    scanf("%f",&x.real);
    printf("Enter first imaginary number");
    scanf("%f",&x.im);
    printf("Enter second real number");
    scanf("%f",&y.real);
    printf("Enter second imaginary number");
    scanf("%f",&y.im);
    z = addComplex(x,y);
    printf("sum=:%f +i %f",z.real,z.im);
    
    

    return 0;
}
