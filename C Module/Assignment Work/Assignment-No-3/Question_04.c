 #include <stdio.h>
 int main() {
 int n, i = 1, count = 0;
 printf("Enter a number: ");
 scanf("%d", &n);
 while(i <= n) {
 if(n % i == 0) {
 count++;
 }
 i++;
 }
 if(count == 2)
printf("Prime");
 else
 printf("Not Prime");
 return 0;
 }