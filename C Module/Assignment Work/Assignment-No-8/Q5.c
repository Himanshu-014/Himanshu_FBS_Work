#include<stdio.h>
void main() {
	int i, arr[5], alt;
	
	printf("Enterr the Elements of the array :");
	for (i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}

 printf("alternate elements are :%d",arr[i]);
    for (i=0;i<=5;i+=2)
	{
		printf("%d",arr[i]);
	}
		 

}