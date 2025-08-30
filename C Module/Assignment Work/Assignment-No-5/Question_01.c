#include <stdio.h>

int main() {
	int i;

	for (i = 1; i <= 4; i++) {
		for(int j=1; j<=4; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}