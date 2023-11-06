#include<stdio.h>
int main()
{
	int a,y;
	printf("ENTER MONTH\n");
	scanf("%d", &a);
	printf("ENTER YEAR\n");
	scanf("%d", &y);
	if ( a==1 )
	printf("The month is JANUARY\n");
	else if ( a==2 )
	printf("The month is FEBRUARY\n");
	else if ( a==3 )
	printf("The month is MARCH\n");
	else if ( a==4 )
	printf("The month is APRIL\n");
	else if ( a==5 )
	printf("The month is MAY\n");
	else if ( a==6 )
	printf("The month is JUNE\n");
	else if ( a==7 )
	printf("The month is JULY\n");
	else if ( a==8 )
	printf("The month is AUGUST\n");
	else if ( a==9 )
	printf("The month is SEPTEMBER\n");
	else if ( a==10 )
	printf("The month is OCTOBER\n");
	else if ( a==11 )
	printf("The month is NOVEMBER\n");
	else if ( a==12 )
	printf("The month is DECEMBER\n");
	
	if ( y%4 == 0 && ( y%100 != 0 || y%400 == 0 ) && a==2 )
	printf("This month has 29 days\n");
	else if ( a==1 )
	printf("This month has 31 days\n");
	else if ( a==2 )
	printf("This month has 28 days\n");
	else if ( a==3 )
	printf("This month has 31 days\n");
	else if ( a==4 )
	printf("This month has 30 days\n");
	else if ( a==5 )
	printf("This month has 31 days\n");
	else if ( a==6 )
	printf("This month has 30 days\n");
	else if ( a==7 )
	printf("This month has 31 days\n");
	else if ( a==8 )
	printf("This month has 31 days\n");
	else if ( a==9 )
	printf("This month has 30 days\n");
	else if ( a==10 )
	printf("This month has 31 days\n");
	else if ( a==11 )
	printf("This month has 30 days\n");
	else if ( a==12 )
	printf("This month has 31 days\n");
	return 0;
}




















