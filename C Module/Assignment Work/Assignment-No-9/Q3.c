#include <stdio.h>
void store(int * , int);
void sum(int *, int);
void main() {
	int arr[10], i;
	
	printf("enter the 10 elements of arr :");
	store(arr, 10);
	
	sum(arr,10);
}

void store(int *ptr, int size) 
{
		for( int i= 0; i<size; i++) {
			scanf("%d",&ptr[i]);
		}
}

void sum(int *ptr, int size)
{
	int sum=0;
	for(int i = 0; i < size; i++) {
		sum = sum + ptr[i];                // add each element and store sum
	}
	printf("Sum = %d", sum);
}