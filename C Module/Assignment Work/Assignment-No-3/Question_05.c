 #include <stdio.h>
 int main() {
 int n, temp, digit, sum = 0;
 printf("Enter a number: ");
 scanf("%d", &n);
 temp = n;
 while(temp > 0) {
 digit = temp % 10;
 sum = sum + (digit * digit * digit);
 temp = temp / 10;
 }
 if(sum == n)
 printf("Armstrong");
 else
 printf("Not Armstrong");
 return 0;
 }