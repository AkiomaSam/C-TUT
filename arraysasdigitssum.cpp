#include<stdio.h>
int main()
{
	int n, m, i, j, x = 0, y = 0, d;
	printf("Enter the size of the firstarray:\t");
	scanf("%d", &n);
	printf("Enter the size of the second array:\t");
	scanf("%d", &m);
	int a[n], b[m];
	for ( i = 0; i < n; i++ )
	{
		printf("\nenter the element%d of the first array:\t", i+1);
		scanf("%d", &a[i]);	
	}
	for ( i = 0; i < m; i++ )
	{
		printf("\nenter the element%d of the second array:\t", i+1);
		scanf("%d", &b[i]);	
	}
	for ( i = 0; i < n; i++ )
	{
		x *= 10;
		x += a[i];
	}
	for ( i = 0; i < m; i++ )
	{
		y *= 10;
		y += b[i];
	}
	printf("\nSum is %d", x+y);
	return 0;
}
