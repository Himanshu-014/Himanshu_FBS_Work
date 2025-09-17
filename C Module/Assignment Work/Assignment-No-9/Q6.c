#include <stdio.h>
void store(int *, int);
void PrimeNos(int *, int);
void main() {
	int arr[5];

	printf("Enter 5 elements: ");
	store(arr, 5);

	printf("Prime numbers in array are: ");
	PrimeNos(arr,5);

}

void store(int *ptr, int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void PrimeNos(int *ptr, int size) {
	int i, j, flag;
	for (i = 0; i < size; i++) {
		if (ptr[i] < 2)
			continue;                   // skip numbers < 2

		flag = 1;                      // assume prime
		for (j = 2; j <= ptr[i] / 2; j++) {
			if (ptr[i] % j == 0) {
				flag = 0;            // not prime
				break;
			}
		}

		if (flag == 1) {
			printf("%d ", ptr[i]);
		}
	}
}