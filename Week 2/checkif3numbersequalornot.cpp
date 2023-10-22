// This program is used to know whether the entered three nummbers are equal or not
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
	if ( a==b && a==c )
	printf("the entered numbers %d %d %d are equal\n", a, b, c);
	else
	printf("the entered numbers are not equal\n");
	return 0;
}