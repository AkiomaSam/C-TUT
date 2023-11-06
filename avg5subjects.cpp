// This is program for calculating percentage of a student from his performance in 5 different subjects
#include<stdio.h>
int main()
{
	float a, b, c, d, e;
	printf("Enter marks of subject a:\n");
	scanf("%f", &a);
	printf("Enter marks of subject b:\n");
	scanf("%f", &b);
	printf("Enter marks of subject c:\n");
	scanf("%f", &c);
	printf("Enter marks of subject d:\n");
	scanf("%f", &d);
	printf("Enter marks of subject e:\n");
	scanf("%f", &e);
	float v;
	v = (a+b+c+d+e)/5;
	printf("The percentage marks of the students in 5 different subjects is %f %%", v);
	return 0;
}





















