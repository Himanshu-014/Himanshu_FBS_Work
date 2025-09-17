#include<stdio.h>
void store(int *, int );
void sum(int *, int *, int);

void main() {

	int arr[5], brr[5];

	printf("enter the 5 elements of arr :");
	store(arr, 5);

	printf("enter array2 elements :");
	store(brr,5);

	printf("sum of array1 and array2 :");
	sum(arr, brr, 5);
}

void store(int *ptr, int size) {
	for( int i= 0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void sum(int *ptr1, int *ptr2,int size) {
	int crr[5];
	for(int i = 0; i < 5; i++) {
		crr[i] = ptr1[i]+ptr2[i];
		printf("%d ",crr[i]);
	}

}