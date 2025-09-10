#include <stdio.h>

// Function declarations
int add(int, int);
int subs(int, int);
int multi(int, int);
int divi(int, int);
int mod(int, int);

void main() {
	int Num1, Num2;

	printf("Enter Two Numbers: ");
	scanf("%d%d", &Num1, &Num2);

	int res =add(Num1, Num2);
		printf("Addition = %d\n", res);
		
int res1 = subs(Num1, Num2);
		printf("Subtraction = %d\n", res1);
		
int res2 =	multi(Num1, Num2);
		printf("Multiplication = %d\n", res2);

int res3 =	divi(Num1, Num2);
		printf("Division = %d\n", res3);

int res4 =	mod(Num1, Num2);
		printf("Modulus = %d\n", res4);

}

int add(int Num1, int Num2) {
	int sum = Num1 + Num2;
	return sum;

}

int subs(int Num1, int Num2) {
	int sub = Num1 - Num2;
	return sub;

}

int multi(int Num1, int Num2) {
	int mul = Num1 * Num2;
		return mul;

}

int divi(int Num1, int Num2) {
	int div = Num1 / Num2;
	return div;

}

int mod(int Num1, int Num2) {
	int m = Num1 % Num2;
		return m;

}

