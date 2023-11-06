#include<stdio.h>
int main()
{
	int n, i, j, oc;
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
	printf("\nThe repeating elements are:\n");
	for ( i = 0; i < n; i++ )
	{
		oc = 0;
		for ( j = 0; j < n; j++ )
		{
			if ( a[i] == a[j] ) oc++;
			else;
		}
		if ( oc > 1 )
		{
			printf("%d,", a[i]);
		}
	}
	return 0;
}
