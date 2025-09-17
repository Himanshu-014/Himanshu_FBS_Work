#include<stdio.h>
void store(int *, int );
void merge(int *,int * , int );
void main() {

	int arr[5], brr[5];


	printf("enter array1 elements :");
	store(arr , 5);

	printf("enter array2 elements :");
	store(brr,5);


	printf("Merging of array1 and array2 elements are :");
	merge(arr,brr,5);
}

void store(int *ptr , int size)
{
	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void merge(int*ptr1, int *ptr2,int size)
{
	int crr[10];
	for(int i = 0; i < size; i++) 
	{
        crr[i] = ptr1[i];      
		 printf("%d\n", crr[i]); 
    }
    
    for(int i = 0; i < size; i++)
	{
        crr[i+5] = ptr2[i];
		 printf("%d\n", crr[i + 5]);  
    }
}