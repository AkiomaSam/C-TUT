#include<stdio.h>
int main()
{
	int a;
	printf("Enter a\n");
	scanf("%d", &a);
	if ( a % 7 == 1 )
	printf("It is monday\n");
	else if ( a % 7 == 2 )
	printf("It is tuesday\n");
	else if ( a % 7 == 3 )
	printf("It is wednesday\n");
	else if ( a % 7 == 4 )
	printf("It is thursday\n");
	else if ( a % 7 == 5 )
	printf("It is friday\n");
	else if ( a % 7 == 6 )
	printf("It is saturday\n");
	else
	printf("It is sunday\n");
	return 0;
}










