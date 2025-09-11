#include <stdio.h>

// Function declaration
void printArmstrong(int *n);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    // Function call
    printArmstrong(&n);
}

// Function definition
void printArmstrong(int *n)
{
    int no, sum, digit, temp;

    printf("Armstrong numbers between 1 and %d are: ", *n);

    for (no = 1; no <= n; no++)  // loop through numbers
    {
        temp = no;   // store original number
        sum = 0;

        while (temp > 0)  // extract digits
        {
            digit = temp % 10;                // get last digit
            sum = sum + (digit * digit * digit); // cube and add
            temp = temp / 10;                  // reduce number
        }

        if (sum == no)  // check Armstrong condition
            printf("%d ", no);
    }
}

