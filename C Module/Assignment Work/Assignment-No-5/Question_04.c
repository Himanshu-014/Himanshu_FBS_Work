#include <stdio.h>

int main() {
	int i,k;

	for (i = 1; i <= 5; i++) {
		for(k=5; k>=i; k--) {
			printf(" ");
		}

		for(int j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}