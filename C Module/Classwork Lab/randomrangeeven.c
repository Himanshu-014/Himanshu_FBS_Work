#include <stdio.h>

int main() {
    int a=51;
	int b=500;
    if (a % 2 != 0) {
        a++;
    }

    while (a <= b){
        printf("%d ", a);
        a=a+2;
    }

    return 0;
}
