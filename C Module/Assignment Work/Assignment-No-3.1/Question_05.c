#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
    }
    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
