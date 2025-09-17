#include <stdio.h>
void store(int*,int);
void displayarray(int *, int);
void main() {
	int arr[10];

	printf("enter the 5 elements of arr :");
	store(arr, 5);

	printf("\nCurrent Arr array elements are :");
	displayarray(arr,5);
}

void displayarray(int *ptr, int size) 
{
		for(int i = 0; i < size; i++)
		{
			printf("%d ", ptr[i]);
		}
}
void store(int *ptr, int size) 
{
		for( int i= 0; i<size; i++) {
			scanf("%d",&ptr[i]);
		}
}