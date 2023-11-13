#include<stdio.h>

int main() {
    int array [30];
    int i=0;
    int n=0;
    int number=0;
    int location=0;
    printf("Enter the number of elements:\n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array [i]);
    }
    printf("Enter the number to be searched: \n ");
    scanf("%d",&number);
    for(i=0;i<n;i++){
        if(array[i]==number)
        {
            location=i+1;
            printf("Number found at location: %d\n",location);
            break;
        }
    }

    system("pause");
    return 0;
}