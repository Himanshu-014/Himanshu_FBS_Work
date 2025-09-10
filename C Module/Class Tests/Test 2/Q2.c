#include <stdio.h>
void checkNumber(int n);

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkNumber(num);
}
void checkNumber(int n) {
    if (n > 0) {
        printf("%d is Positive\n", n);
    } else if (n < 0) {
        printf("%d is Negative\n", n);
    } else {
        printf("Number is Neutral (0)\n");
    }
}