

#include "stdio.h"


int main(){
	int arr[15];
	int * ptr;
	int i=0;
	int numbers;
	ptr =arr;
	fflush(stdout);
	printf("numbers\n");
	fflush(stdout);
	scanf("%d",&numbers);
	for(i=0;i<numbers;i++)
	{
		printf("enter the %d number\n",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	ptr = arr+numbers-1;
	for(i=0;i<numbers;i++)
		{
			printf("element %d : %d\t\n",i,*ptr);
			fflush(stdout);
			ptr--;
		}

	return 0;
}
