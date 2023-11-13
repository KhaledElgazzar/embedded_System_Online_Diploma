#include<stdio.h>
#include<string.h>

int main() {
    char array [100];
    char array_reversed[100];
    int i=0;
    int n=0;
    printf("Enter a string:\n ");
    gets(array);
    
    n=strlen(array);

    for(i=0;i<n;i++)
    {
        array_reversed[i]=array[n-i-1];
    }


    printf("%s\n",array_reversed);

    system("pause");
    return 0;
}