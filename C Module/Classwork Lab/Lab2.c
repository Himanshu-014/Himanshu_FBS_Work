#include<stdio.h>
void store(int*, int );
void display(int* , int );
void replace(int* , int , int , int );
void main() 
{
	int arr[10];
	int size;
	
	printf("Enter the Elements of the array :");
	store(&arr,10);

	printf("\nCurrent Array elements are : ");
	display(&arr,10);

	replace(&arr,10,5,7);

	printf("\n After Replacement Array elements are : ");
	display(&arr,10);
}

void store(int*ptr, int size) {
	for (int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void display(int *ptr, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}
}

void replace(int* ptr, int size, int old, int new1) {
	for(int i=0; i< size; i++) {
		if(old == ptr[i]) {
			ptr[i] =new1;
		}
	}
}