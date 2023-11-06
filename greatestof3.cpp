#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Enter a\n");
	scanf("%f", &a);
	printf("Enter b\n");
	scanf("%f", &b);
	printf("Enter c\n");
	scanf("%f", &c);
	if ( a>b & a>c )
	printf("a is greatest\n");
	else if ( b>c )
	printf("b is greatest\n");
	else
	printf("c is greatest\n");
	return 0;
}




























