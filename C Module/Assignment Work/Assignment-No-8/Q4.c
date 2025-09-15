#include<stdio.h>
void evenodd(int a[]);
void main() {
	int a[10],i;
	printf("Enter the numbers in array: ");
	for(i=0; i<10; i++) {             // input to store elements in array
		scanf("%d",&a[i]);
	}
	printf("Even numbers in array: ");
	for(i=0; i<10; i++) {
		if(a[i]%2==0)                // check if element is even 
			printf("%d",a[i]);
	}

	printf("\nOdd numbers in array :");
	for(i=0; i<10; i++) {
		if(a[i]%2!=0)                // check if element is even 
			printf("%d",a[i]);
	}

}