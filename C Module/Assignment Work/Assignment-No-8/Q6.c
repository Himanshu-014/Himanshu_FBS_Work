#include <stdio.h>

void main() {
    int arr[5], i, j, flag;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in array are: ");
    for (i = 0; i < 5; i++) {
        if (arr[i] < 2) 
            continue;                   // skip numbers < 2

        flag = 1;                      // assume prime
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 0;            // not prime
                break;
            }
        }

        if (flag == 1) {
            printf("%d ", arr[i]);
        }
    }

}
