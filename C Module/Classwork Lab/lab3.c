#include <stdio.h>

int main() {
    int arr[5], brr[5];
    int i, j;
    int is_present;

    
    printf("Enter 5 elements for the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter 5 elements for the second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &brr[i]);
    }

    printf("\nElements in the second array that are NOT in the first array:\n");

    
    for (i = 0; i < 5; i++) {
        is_present = 0; 
        for (j = 0; j < 5; j++) {
            if (brr[i] == arr[j]) {
                is_present = 1; 
            }
        }

        
        if (is_present == 0) {
            printf("%d\n", brr[i]);
        }
    }

    
}