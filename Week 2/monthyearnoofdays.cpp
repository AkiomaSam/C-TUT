#include <stdio.h>
int main()
{
	int a, y;
	printf("ENTER MONTH\n");
	scanf("%d", &a);
	printf("ENTER YEAR\n");
	scanf("%d", &y);
	if (a == 1)
	{
		printf("The month is JANUARY and it is %d year\n");
		printf("This month has 31 days\n");
	}
	else if (a == 3)
	{
		printf("The month is MARCH and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (a == 4)
	{
		printf("The month is APRIL and it is %d year\n", y);
		printf("This month has 30 days\n");
	}
	else if (a == 5)
	{
		printf("The month is MAY and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (a == 6)
	{
		printf("The month is JUNE and it is %d year\n", y);
		printf("This month has 30 days\n");
	}
	else if (a == 7)
	{
		printf("The month is JULY and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (a == 8)
	{
		printf("The month is AUGUST and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (a == 9)
	{
		printf("The month is SEPTEMBER and it is %d year\n", y);
		printf("This month has 30 days\n");
	}
	else if (a == 10)
	{
		printf("The month is OCTOBER and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (a == 11)
	{
		printf("The month is NOVEMBER and it is %d year\n", y);
		printf("This month has 30 days\n");
	}
	else if (a == 12)
	{
		printf("The month is DECEMBER and it is %d year\n", y);
		printf("This month has 31 days\n");
	}
	else if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0) && a == 2)
	{
		printf("The month is FEBRUARY and it is %d year\n", y);
		printf("This month has 29 days\n");
	}
	else if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0) && a == 2)
	{
		printf("The month is FEBRUARY and it is %d year\n", y);
		printf("This month has 28 days\n");
	}
	else
	{
		printf("Entered month is invalid\n");
	}
	return 0;
}