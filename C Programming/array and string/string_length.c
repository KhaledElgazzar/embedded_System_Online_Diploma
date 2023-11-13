#include<stdio.h>

int main() {
    char array [100];
    int i=0;
    int n=0;
    printf("Enter a string:\n ");
    gets(array);
    
    i=0;
    while (array[i]!=0)
    {
        n++;
        i++;
    }

    printf("length of string is : %d\n",n);
    system("pause");
    return 0;
}