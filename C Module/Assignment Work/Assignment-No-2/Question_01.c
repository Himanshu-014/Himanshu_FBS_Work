#include <stdio.h>

int main() {
    int no;
    
    printf("Enter a number: ");
    scanf("%d", &no);
    
    if (no % 2 == 0) {
        printf("%d is Even.\n", no);
    } else {
        printf("%d is Odd.\n", no);
    }
    
    return 0;
}
