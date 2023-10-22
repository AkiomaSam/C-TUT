// This program is used to check whether the entered year is leap year or not
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year\n");
	scanf("%d", &y);
	if ( y%4 == 0 && ( y%100 != 0 || y%400 == 0 ) )
	{
		printf("The year %d is a leap year\n", y);
	}
	else if ( y > 0 )
	{
		printf("The year %d is not a leap year\n", y);
	}
	else
	{
		printf("Entered year is invalid\n");
	}
	return 0;
}





















