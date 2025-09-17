#include <stdio.h>
void store(int * , int);
void search(int * , int, int);
void main() {
	int arr[10];
	int key;
	printf("enter the 10 elements of arr :");
	store(arr, 10);
	
	printf("Enter element to search: ");
	scanf("%d",&key);
	search(arr,10,key);	
}

void store(int *ptr, int size) 
{
		for( int i= 0; i<size; i++) {
			scanf("%d",&ptr[i]);
		}
}

void search(int *ptr, int size, int key)
{  
int  i;
int found=0;
	for(int i = 0; i < size; i++) {
		if(ptr[i] == key) {              // check if ith element is same as key
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