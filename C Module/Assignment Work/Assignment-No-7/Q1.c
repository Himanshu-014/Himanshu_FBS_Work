#include<stdio.h>
void add(int*a,int*b);

void main() {
	int a=5,b=5;
	add(&a,&b);
}

void add(int *a,int *b) {
	int c=*a + *b;
	printf("Addition is %d",c);
}
