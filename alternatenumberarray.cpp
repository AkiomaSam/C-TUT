#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the size of the aray\n");
	scanf("%d", &n);
	if ( n%2 != 0 )
	{
		printf("\nDesired action cannot be performed as it can only be performed for an even sized array\n");
	}
	else
	{
		int a[n];
		for ( i = 0; i < n; i++ )
		{
			printf("\nenter the element%d of the array\n", i+1);
			scanf("%d", &a[i]);	
		}
		printf("The inserted array is:\n");
		for ( i = 0; i < n; i++ )
		{
			printf("%d \t", a[i]);
		}
		for ( i = 0; i < n; i++ )
		{
			if ( i % 2 == 0 )
			{
				a[i] = a[i] + a[i+1];
				a[i+1] = a[i] - a[i+1];
				a[i] = a[i] - a[i+1];
			}
		}
			printf("\n The modified array ( Interchanging elements ) is:\n");
		for ( i = 0; i < n; i++ )
		{
			printf("%d \t", a[i]);
		}
	}
	return 0;
}
