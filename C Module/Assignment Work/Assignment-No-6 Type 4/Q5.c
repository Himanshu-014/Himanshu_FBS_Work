#include<stdio.h>
int cal(int);
void main()
{
	int c=15;
	int res = cal(c);
	printf("cel= %d",res);
}
int cal(int c){
  int a=(c*9/5+35);
  return a;
}