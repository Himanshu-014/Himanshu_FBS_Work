#include<stdio.h>
int add(int,int); // declare

void main() {
	int a=5,b=5;
	int sum=add(a,b);
	printf("Addition is %d",sum);

}

int add(int a,int b) {

	return a+b;
}
