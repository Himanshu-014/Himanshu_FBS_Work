#include <stdio.h>

int main()
{
    int no=2004;
if (no%4 == 0 && no%100 != 0 || no%400 == 0)
  {
 printf("leap Number.");
  }
  else {
 printf("not leap.");
   }
    return 0;
}