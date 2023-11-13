#include<stdio.h>

int main() {
    char array [100];
    int i=0;
    char c='0';
    int n=0;
    printf("Enter a string:\n ");
    gets(array);

    printf("Enter the char to find frequency: \n ");
    scanf("%c",&c);
    i=0;
    while (array[i]!=0)
    {
        if(array[i]==c)
        {
            n++;
        }
        i++;
    }

    printf("frequency of %c = %d\n",c,n);
    system("pause");
    return 0;
}