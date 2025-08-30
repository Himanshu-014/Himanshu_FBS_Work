#include <stdio.h>

int main() {
	int i,count=1;

	for (i = 1; i <= 4; i++) {
	
		for(int j=1; j<=i; j++) {
			
			printf("%d ",count++);
		}
	printf("\n");
}
	return 0;
}