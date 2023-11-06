#include<stdio.h>
int main()
{
	int n, i, k, j;
	printf("Enter the size of the aray\n");
	scanf("%d", &n);
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
	for ( j = 0; j < n; j++ )
	{
	for ( i = 0; i < n; i++ )
	{
		if ( a[i] > a[i+1] );
		else
		{
			a[i] = a[i] + a[i+1];
			a[i+1] = a[i] - a[i+1];
			a[i] = a[i] - a[i+1];
		}
	}
	}
	printf("\nEnter the order k ( kth smallest and kth largest )\n");
	scanf("%d", &k);
	printf("\n for k = %d", k);
	printf("\n kth smallest is %d and kth largest is %d ", a[n-k], a[k-1]);
	return 0;
}
