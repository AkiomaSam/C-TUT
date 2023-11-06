#include<stdio.h>
int main()
{
	int n, i, s1=0, s2=0;
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
	for ( i = 0; i < n/2; i++ )
	{
		s1 += a[i];
	}
	for ( i = n/2 ; i < n; i++ )
	{
		s2 += a[i];
	}
	if ( s1 > s2 )
	{
		printf("\n%d has to be added to right half of array", s2 - s1);
	}
	else
	{
		printf("\n%d has to be added to left half of array", s1 - s2);
	}
	return 0;
}
