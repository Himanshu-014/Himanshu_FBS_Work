#include <stdio.h>

void main() {
	int arr[10], found=0, key, i;
	
printf("Enter the elements in array: ");
	for (i = 1; i<=10; i++) {
		scanf("%d",&arr[i]);               // input to store elements in array
	}
	
	printf("Enter element to search: ");
	scanf("%d", &key);

	for(int i = 0; i < 10; i++) {
		if(arr[i] == key) {              // check if ith element is same as keyth
			found = 1;  
			break;
		}
	}
	if(found == 1) {

		printf("Found\n");
	} else {

		printf("Not Found\n");
	}
}