#include<stdio.h>
void main() {
	int unit;
	int amount;
	printf("Enterr the Units:");
	scanf("%d",&unit);

	if(unit <=50) {
		amount=30*unit;
		printf("Cost for %dunits is %d",unit,amount);
	} else if(unit >= 51||unit<=150) {
		amount=40*unit;
		printf("Cost for %dunits is %d",unit,amount);
	} else if(unit>=151) {
		amount=50*unit;
		printf("Cost for %dunits is %d",unit,amount);
	}
}