#include<stdio.h>
#include<limits.h>
void main() {
    int arr[6], i;
    int a, b, c;

    printf("Enter elements:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    
    a = b = c = INT_MIN; 

    for(i = 0; i < 6; i++) {
        if(arr[i] > a) {
            c = b;
            b = a;
            a = arr[i];
        }
        else if(arr[i] > b && arr[i] != a) {
            c = b;
            b = arr[i];
        }
        else if(arr[i] > c && arr[i] != b && arr[i] != a) {
            c = arr[i];
        }
    }

    printf("The three largest elements are: %d, %d, %d\n", a, b, c);

}
