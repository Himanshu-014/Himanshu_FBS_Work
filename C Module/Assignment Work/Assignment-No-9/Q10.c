#include <stdio.h>
void store(int *, int);
void sort(int *, int);
void display(int *, int);
void main() {
	int arr[5];

	printf("Enter 5 elements: ");
	store(arr, 5);
	
	sort(arr , 5);
	
	printf("Sorted array is: ");
	display(arr, 5);

}

void store(int *ptr, int size)
{
	for(int i = 0; i < size; i++) {
		scanf("%d", &ptr[i]);
	}
}

void sort(int *ptr, int size)
{
	int temp;
	for(int j=0; j<size-1; j++) {

		for(int i = 0; i < size-j-1; i++) {
			if(ptr[i] > ptr[i+1]) {
				temp = ptr[i];
				ptr[i] = ptr[i+1];
				ptr[i+1] = temp;
			}
		}
	}
}

void display(int *ptr, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}
}