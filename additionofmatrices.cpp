#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("Enter number of rows of matrix\n");
	scanf("%d", &m);
	printf("Enter number of columns of matrix\n");
	scanf("%d", &n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	// matrix a
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			scanf("%d", &a[i][j]);
		}
	}
	// matrix b
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			scanf("%d", &b[i][j]);
		}
	}
	// matrix c initial defining as null matrix
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n ; j++ )
		{
			c[i][j] = 0;
		}
	}
	// writing c as addition of a and b
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			c[i][j] += a[i][j] + b[i][j];
		}
	}
	// printing c
		for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			printf("%d", c[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}
