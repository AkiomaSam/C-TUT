// This is program for test
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter number a:\n");
	scanf("%d", &a);
	printf("Enter number b:\n");
	scanf("%d", &b);
	a=a-b;
	b=a+(2*b);
	printf("a is %d b is %d", a, b);
	return 0;
}
