// This is program for swaping numbers "including their values in memory"
// This is method 1
// We are using a dummy variable for swapping memory values of the two numbers
#include<stdio.h>
int main()
{
	int a, b,t;
	printf("Enter number a:\n");
	scanf("%d", &a);
	printf("Enter number b:\n");
	scanf("%d", &b);
	t = a;
	a = b;
	b = t;
	printf("The value of integer a is %d\n",a);
	printf("The value of integer b is %d\n",b);
}
