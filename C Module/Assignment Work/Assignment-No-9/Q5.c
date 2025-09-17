#include<stdio.h>
void store(int*, int);
void Altelements(int *, int);
void main() {
	int arr[10];

	printf("Enterr the Elements of the array :");
	store(arr, 10);

	printf("alternate elements are :");
	Altelements(arr,10);
}

void store(int *ptr, int size) {
	for (int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void Altelements(int *ptr, int size) {
	for (int i=0; i< size; i+=2) {
		printf(" %d" ,ptr[i]);
	}
}