#include <stdio.h>

int main() {
    int num = 121;
	int temp, rem; 
	int sum = 0;

    temp = num;

    while (num != 0) {
        rem = num % 10;       
        sum = rem * rem * rem;  
        num = num/10;                  
    }
//loop ends here
    if (sum == temp){
    	printf("No is armstrong number.\n", );
	}
    else{
    	        printf("No is not  Armstrong number.\n", );

	}

    return 0;
}
