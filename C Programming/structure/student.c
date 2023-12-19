/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Student {
    char name [100];
    int roll;
    float marks;
};

int main()
{
    struct Student x;
    printf("Enter name");
    scanf("%s",x.name);
    printf("Enter roll number");
    scanf("%d",&x.roll);
    printf("Enter marks");
    scanf("%f",&x.marks);
    printf("display information");
    printf("name: %s\n",x.name);
    printf("roll number: %d\n",x.roll);
    printf("marks: %f\n",x.marks);
    

    return 0;
}
