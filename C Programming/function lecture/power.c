#include <stdio.h>
int get_power(int num, int power);

int main()
{
    int num, power;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter the power");
    scanf("%d",&power);
    printf("%d",get_power(num,power));
    return 0;
}

int get_power(int num, int power)
{
    if (power != 1)
    {
        return num * get_power(num,(power-1));
    }
    

}