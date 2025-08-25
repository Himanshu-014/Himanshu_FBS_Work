#include <stdio.h>

int main() {
    int num = 1234, original, reversed = 0, digit;


    original = num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        printf("Palindrome number\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
