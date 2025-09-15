#include<stdio.h>
void store(int*,int);
void displayarray(int *, int);
void main() {
	int arr[5],brr[7],crr[10];

	printf("enter the 5 elements of arr :");
	store(arr, 5);
	
	printf("enter the 7 elements of brr :");
	store(brr, 7);
	
	printf("enter the 10 elements of crr :");
	store(crr, 10);
	
	printf("\nCurrent Arr array elements are :");
	displayarray(arr,5);

	printf("\nCurrent brr array elements are :");
	displayarray(brr,7);
	
	printf("\nCurrent crr array elements are :");
	displayarray(crr,10);
}
	
void displayarray(int *ptr, int num) 
{
		for(int i = 0; i < num; i++)
		{
			printf("%d ", ptr[i]);
		}
}
void store(int *ptr, int num) 
{
		for( int i= 0; i<num; i++) {
			scanf("%d",&ptr[i]);
		}
}
