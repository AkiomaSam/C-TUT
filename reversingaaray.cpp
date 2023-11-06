#include<stdio.h>
int main()
{
	int n, i;
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
	for ( i = 0; i < n/2; i++ )
	{
			a[i] = a[i] + a[n-i-1];
			a[n-i-1] = a[i] - a[n-i-1];
			a[i] = a[i] - a[n-i-1];
	}
	printf("\n The modified array ( reversed array ) is:\n");
	for ( i = 0; i < n; i++ )
	{
		printf("%d \t", a[i]);
	}
	return 0;
}
