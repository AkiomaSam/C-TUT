#include<stdio.h>
int main()
{
	int n, i, o=1, j, x=1, oc;
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
	for ( i = 1; i < n; i++ )
	{
		oc = 0;
		for ( j = 0; j < i; j++ )
		{
			if ( a[i] == a[j] ) 
			{
				oc++;
			}
			else;
		}
		if ( oc > 0 );
		else
		{
			o++;
		}
	}
	int m[o];
	m[0] = a[0];
	for ( i = 1; i < n; i++ )
	{
		oc = 0;
		for ( j = 0; j < i; j++ )
		{
			if ( a[i] == a[j] ) 
			{
				oc++;
			}
			else;
		}
		if ( oc > 0 );
		else
		{
			m[x] = a[i];
			x++;
		}
	}
	printf("\n The modified array is:\n");
	for ( i = 0; i < o; i++ )
	{
		printf("%d \t", m[i]);
	}
	return 0;
}
