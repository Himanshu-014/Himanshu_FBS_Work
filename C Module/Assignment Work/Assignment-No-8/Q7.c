#include<stdio.h>

void main() {

	int arr[5], brr[5], crr[5];

	printf("enter array1 elements :");
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}

	printf("enter array2 elements :");
	for(int i=0; i<5; i++) {
		scanf("%d",&brr[i]);
	}


	printf("sum of array1 and array2 :");

	for(int i = 0; i < 5; i++) {
		crr[i] = arr[i]+brr[i];
		printf("%d ",crr[i]);
	}

}