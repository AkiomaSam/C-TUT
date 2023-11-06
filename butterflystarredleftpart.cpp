/* 
	program to print pattern of type
	* * * * *
	  * * * *
	    * * *
	      * *
	        *
	        *
	      * *
	    * * *
      * * * *
	* * * * *
	if given n = 5
*/
#include<stdio.h>
int main()
{
	int i, j, s, n;
	printf("Enter number of lines you want\n");
	scanf("%d", &n);
	printf("\n");
	// for loop to print upper part
	for ( i = 1; i <= n; i++ )
	{
		// for loops for printing spaces 
		for ( s = 1; s <= i - 1; s++ )
		{
			printf("  ");
		}
		// for loop for printing * as many times we want
		for ( j = 1; j <= n - i + 1; j++ )
		{
			printf(" *");
		}
		printf("\n");
	}
	// for loop to print lower part
	for ( i = 1; i <= n; i++ )
	{
		// for loops for printing spaces 
		for ( s = 1; s <= n - i; s++ )
		{
			printf("  ");
		}
		// for loop for printing * as many times we want
		for ( j = 1; j <= i; j++ )
		{
			printf(" *");
		}
		printf("\n");
	}


	return 0;
}
