#include<stdio.h>
#include<limits.h>
void main() {
    int arr[5];
    int i, first, second;

    printf("Enter 5 values in the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MIN; 

    for (i = 0; i < 5; i++) {
        if (arr[i] > first) {
            second = first;                             // update second
            first = arr[i];                            // update largest
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];                          // update second if it's not equal to largest
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element (all numbers are same).\n");
    } else {
        printf("Second largest element is: %d\n", second);
    }

   
}
