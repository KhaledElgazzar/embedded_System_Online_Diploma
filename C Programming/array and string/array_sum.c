#include<stdio.h>

int main() {
    int array_1 [2][2];
    int array_2 [2][2];
    int i=0;
    int j=0;
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("Enter a%d%d: ",i,j);
        scanf("%d",&array_1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("Enter a%d%d: ",i,j);
        scanf("%d",&array_2[i][j]);
        }
    }
    printf("sum of matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d    ",array_1[i][j]+array_2[i][j]);
    
        }
        printf("\n");
    }
    system("pause");
    return 0;
}