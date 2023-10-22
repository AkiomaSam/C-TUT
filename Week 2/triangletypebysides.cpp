#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Enter the value of 1st side\n");
	scanf("%f", &a);
	printf("Enter the value of 2nd side\n");
	scanf("%f", &b);
	printf("Enter the value of 3rd side\n");
	scanf("%f", &c);
	if ( a==b && b==c )
	printf("For the input values, it is an equilateral triangle\n");
	else if ( a==b || b==c || c==a )
	printf("For the input values, it is an isoceles triangle\n");
	else
	printf("For the input values, it is a scalene triangle\n");
}