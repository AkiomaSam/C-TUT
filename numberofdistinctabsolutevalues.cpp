#include<stdio.h>
int main()
{
	int n, oc, i, j, o=0;
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
	for ( i = 0; i < n; i++ )
	{
		a[i]=a[i]*a[i];
	}
	for ( i = 0; i < n; i++ )
	{
		oc = 0;
		for ( j = 0; j <= i; j++ )
		{
			if ( a[i] == a[j] ) oc++;
		}
		if ( oc == 1 ) o++;
	}
	printf("\nthere are %d distinct absolute values", o);
	return 0;
}
