#include <stdio.h>
int main() {
    int a, b, sum = 0;
    printf("Enter start and end of the range: ");
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++) {
        sum +=i;
    }
    printf("Sum = %d", sum);
    return 0;
}
