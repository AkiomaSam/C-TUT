#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter the number of units of electricity used\n");
	scanf("%d", &a);
	if ( a < 101 )
	{
		b = a*2;
		printf("The cost of the electricity bill is %f\n", b);
	}
	else if ( a < 251 )
	{
		b = ((a-100)*3.5)+200 ;
		printf("The cost of the electricity bill is %f\n", b);
	}
	else
	{
		b = ((a-250)*5)+725;
		printf("The cost of the electricity bill is %f\n", b);
	}
	return 0;
}

















