#include <stdio.h>
int * get_prime_numbers(int start, int end);

int main()
{
    int start , end , i;
    int *prime_numbers;
    printf("enter the start number");
    scanf("%d",&start);
    printf("enter the end number");
    scanf("%d",&end);
    prime_numbers = get_prime_numbers(start , end);
    for (i = start; i < end; i++)
    {
        if(*(prime_numbers+(i-start)) != 0)
        {
            printf("%d  ",*(prime_numbers+(i-start)));
        }
        
    }
    
    
    return 0;
}

int * get_prime_numbers(int start, int end)
{
    int i,j,divide_count;
    static int prime_numbers[100];
    for (i = start ; i <= end ; i++)
    {
        divide_count = 0;
        for (j = 1 ; j < i ; j++)
        {
            if(i%j ==0)
            {
                divide_count++;
            }
        }
        if(divide_count == 1)
        {
            prime_numbers[i-start]=i;
        }
        
    }
    
    return prime_numbers;
}