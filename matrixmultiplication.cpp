#include<stdio.h>
int main()
{
	int i,j,k,m,n,p;
	printf("Enter number of rows of matrix 1 ");
	scanf("%d", &m);
	printf("Enter number of columns of matrix 1 or number of rows of matrix 2");
	scanf("%d", &n);
	printf("Enter number of columns of matrix 2");
	scanf("%d", &p);
	int a[m][n];
	int b[n][p];
	int c[m][p];
	// matrix a
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			a[i][j] = i + j;
		}
	}
	// matrix b
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < p; j++ )
		{
			b[i][j] = i - j;
		}
	}
	// matrix c initial defining as null matrix
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < p; j++ )
		{
			c[i][j] = 0;
		}
	}
	// changing c into multplicating matrix of a and b
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < p; j++ )
		{
			for ( k = 0; k < n ; k++)
			{
				c[i][j] = a[i][k] + b[k][j];
			}
		}
	}
	// printing c
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < p; j++ )
		{
			printf("%d", c[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}
