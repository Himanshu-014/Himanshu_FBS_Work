#include <stdio.h>

// Function declaration
int check(int);

void main() {
	int mark;

	printf("Enter Mark: ");
	scanf("%d", &mark);

	// Function call
	int res = check(mark);
	if (res == 1) {
		printf("Distinction");
	} else if (res == 2) {
		printf("First Class");
	} else if (res == 3) {
		printf("Second Class");
	} else if (res == 4) {
		printf("Pass Class");
	} else {
		printf("Fail");
	}
}

// Function definition
int check(int mark) {
	if (mark > 75) {
		return 1;
	} else if (mark > 65) {
		return 2;
	} else if (mark > 55) {
		return 3;
	} else if (mark >= 40) {
		return 4;
	} else {
		return 5;
	}
}


