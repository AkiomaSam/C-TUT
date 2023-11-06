#include<stdio.h>
int main()
{
	int n, x, i;
	printf("enter the order of the array:\t");
	scanf("%d", &n);
	int a[n];
	for ( i = 0; i < n; i++ )
	{
		printf("Enter element %d:\t", i+1);
		scanf("%d", &a[i]);
	}
	printf("The entered array is :-\n");
	for ( i = 0; i < n; i++ )
	{
		printf("%d \t", a[i]);
	}
	printf("\nenter the number:\t");
	scanf("%d", &x);
	for ( i = 0; i< n; i++ )
	{
		if ( a[i] >= x )
		{
			printf("Ceiling of  %d is %d", x, a[i]);
			break;
		}
	}
	return 0;
}
