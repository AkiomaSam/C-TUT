// This program is used to know the greatest of three numbers
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Enter number a\n");
	scanf("%f", &a);
	printf("Enter number b\n");
	scanf("%f", &b);
	printf("Enter number c\n");
	scanf("%f", &c);
	if ( a>b & a>c )
	{
		printf(" The entered number a = %d is greatest of the entered numbers\n", a);
	}
	else if ( b>c )
	{
		printf(" The entered number b = %d is greatest of the entered numbers\n", b);
	}
	else
	{
		printf(" The entered number c = %d is greatest of the entered numbers\n", c);
	}
	return 0;
}