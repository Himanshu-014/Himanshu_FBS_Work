#include<stdio.h>
int main(){
    int arr[5];
    int brr[5];

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }
    printf("The unique elements in second array are:\n");
    for (int i = 0; i < 5;i++){
        int flag = 0;
        for (int j = 0; j < 5;j++){
            if(brr[i]==arr[j]){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d ", brr[i]);
        }
    }
}