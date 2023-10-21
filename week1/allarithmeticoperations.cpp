// This is program to perform all arithmetic operations
// Addition
// Subtraction
// Multiplication
// Division
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter number a:\n");
	scanf("%d", &a);
	printf("Enter number b:\n");
	scanf("%d", &b);
	printf("Sum of %d and %d is %d + %d = %d \n ", a, b, a, b, a + b );
	printf("Difference between %d and %d is %d - %d = %d \n", a, b, a, b, a - b );
	printf("Product of %d and %d is %d * %d = %d \n", a, b, a, b, a * b );
	printf("%d divided by %d is %d / %d = %d \n", a, b, a, b, a / b );
	return 0;
}