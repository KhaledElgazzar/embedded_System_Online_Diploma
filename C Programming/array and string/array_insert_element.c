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
    printf("Enter the number to be inserted: \n ");
    scanf("%d",&number);
    printf("Enter the location: \n ");
    scanf("%d",&location);
    for(i=n;i>=location;i--){
        array[i]=array[i-1];
    }
    array[location-1]=number; 
    for(i=0;i<=n;i++){
        printf("%d ",array[i]);  
    }
    system("pause");
    return 0;
}