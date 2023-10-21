// This is program for swaping numbers "including their values in memory"
// This is method 2
// Using addition and subtraction
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter number a:\n");
	scanf("%d", &a);
	printf("Enter number b:\n");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of integer a is %d\n",a);
	printf("The value of integer b is %d\n",b);
}
