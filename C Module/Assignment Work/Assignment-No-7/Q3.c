#include<stdio.h>
void faren(int *c);
void main() {
	int c=15;
	faren(&c);
}

void faren(int *c) {
	int f=(*c*9/5)+32;
	printf("celceius = %d",f);
}
