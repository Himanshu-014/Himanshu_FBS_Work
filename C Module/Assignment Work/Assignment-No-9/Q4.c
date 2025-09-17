#include<stdio.h>
void store(int* , int);
void even(int *, int);
void odd(int *, int);
void main() {
	int arr[10],i;

	printf("enter the 10 elements of arr :");
	store(arr, 10);

	even(arr,10);

	odd(arr,10);

}

void store(int *ptr, int size) {
	for( int i= 0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void even(int *ptr, int size) {
	printf("Even numbers in array: ");
	for(int i=0; i<size; i++) {
		if(ptr[i]%2==0)                // check if element is even
			printf("%d",ptr[i]);
	}
}

void odd(int*ptr, int size) {
	printf("\nOdd numbers in array :");
	for(int i=0; i<size; i++) {
		if(ptr[i]%2!=0)                // check if element is even
			printf("%d",ptr[i]);
	}

}