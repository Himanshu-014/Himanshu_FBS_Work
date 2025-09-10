#include<stdio.h>
int area(int);
void main()

{
	int r=5;
	int res = area(r);
	printf("Area is %d",res);
}
int area(int r) {
	float pi=3.14;
	int areaa=(pi*r*r);
	return areaa;
}
