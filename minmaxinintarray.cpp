#include<stdio.h>
int main()
{
	int i, n, min, max, sum, avg, x;
	sum = 0;
	printf("Enter the number of numbers you want to enter \n");
	scanf("%d", &n);
	int a[n];
	for ( i = 0; i < n; i++ )
	{
		printf("Enter value %d \n", i);
		scanf("%d", &a[i]);
	}
	min = a[0];
	max = a[0];
	for ( i = 0; i < n; i++ )
		sum += a[i];
	avg = sum / n;
	for ( i = 0; i < n; i++ )
	{
		if ( max > a[i] );
		else
			max = a[i];
	}
	for ( i = 0; i < n; i++ )
	{
		if ( min < a[i] );
		else 
		min = a[i];
	}
	printf("Average of integers in the array is %d. \n The minimum in array is %d . \n The maximum in array is %d", avg, min, max);
	return 0;
}
