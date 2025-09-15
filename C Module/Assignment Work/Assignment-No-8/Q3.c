#include <stdio.h>

void main() {
	int arr[10], sum=0, i;
	
	printf("Enter the elements in array: ");
	for (i = 1; i<=10; i++) {
		scanf("%d",&arr[i]);               // input to store elements in array
	}
	for(int i = 0; i <= 10; i++) {
		sum = sum + arr[i];                // add each element and store sum
		arr[i]++;
	}
	printf("Sum = %d", sum);

}
