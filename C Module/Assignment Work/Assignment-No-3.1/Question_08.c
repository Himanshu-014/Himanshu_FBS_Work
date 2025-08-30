#include <stdio.h>
int main() {
    int n=145;
	int temp, digit, fact, i, sum = 0;
    temp = n;
    for(; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");
    return 0;
}
