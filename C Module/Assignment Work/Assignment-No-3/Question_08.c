#include <stdio.h>
 int main() {
 int n, temp, digit, fact, i, sum = 0;
 printf("Enter a number: ");
 scanf("%d", &n);
 temp = n;
 while(temp > 0) {
 digit = temp % 10;
 fact = 1;
 i = 1;
 while(i <= digit) {
 fact = fact * i;
 i++;
 }
 sum = sum + fact;
 temp = temp / 10;
 }
 if(sum == n)
 printf("Strong");
 else
 printf("Not Strong");
 return 0;
 }