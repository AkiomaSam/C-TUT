// This is program for calculating area of circle
#include<stdio.h>
int main()
{
	float a;
	printf("Enter radius of the circle (a) :\n");
	scanf("%f", &a);
	printf("The area of circle with radius a = %d is %f\n", a, a*a*3.14);
	return 0;
}