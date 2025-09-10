#include <stdio.h>

// Function declaration
int Minutes(int);
int Hr(int);
void main() {
	int minute = 182;

	// Function call

	int res1=Hr(minute);
	printf("\n hours= %d",res1);

	int res=Minutes(minute);
	printf("mins =%d", res);
}

// Function definition
int Hr(int minute) {
	int hr = (minute / 60);
	return hr;
}
int Minutes(int minute) {

	int min = (minute % 60);

	return min;
}