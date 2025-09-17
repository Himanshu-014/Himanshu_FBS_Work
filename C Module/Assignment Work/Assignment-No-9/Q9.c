#include<stdio.h>
void store(int *, int);
void reverse(int *, int);
void display(int *, int);
void main() {
	int arr[5];

	printf("Enter the Elements of the array :");
	store(arr, 5);

	reverse(arr, 5);

	printf("\nReversed array:\n");
	display(arr,5);

}

void store(int *ptr, int size) {
	for (int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void reverse(int *ptr, int size) {
	int i, rev, temp;
	for(i=0; i<size/2; i++) {
		temp = ptr[i];
		ptr[i] = ptr[size-1-i];
		ptr[size-1-i] = temp;
	}
}

void display(int *ptr, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}
}