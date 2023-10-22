// This program is used to calculate the electrcity bill cost for consumed units
#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter the number of units of electricity used\n");
	scanf("%d", &a);
	if ( a <= 100 )  b = a*2;
	else if ( a <= 250 )  b = a*3.5 ;
	else  b = a*5;
	printf("The cost of the electricity bill is %f\n", b);
	return 0;
}