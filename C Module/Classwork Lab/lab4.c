#include<stdio.h>
int main(){
    int arr[6];

    printf("Enter 5 values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Top 3 elements in array are:\n");
    for (int i = 0; i < 6;i++){
        
        for (int j = 0; j < 6;j++){
            while(j<= arr[i])
			{
				arr[i]= arr[i];
                printf("%d",arr[i]);
            }
        }
      
    }
}