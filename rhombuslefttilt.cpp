/* 
	program to print pattern of type
	*****
	 *****
	  *****
	   *****
	    *****
	if given n = 5
*/
#include<stdio.h>
int main()
{
	int i, j, s, n;
	printf("Enter number of lines you want\n");
	scanf("%d", &n);
	printf("\n");
	// for loop to go into new lines
	for ( i = 1; i <= n; i++ )
	{
		// for loops for printing spaces 
		for ( s = 1; s <= i - 1; s++ )
		{
			printf(" ");
		}
		// for loop for printing * as many times we want
		for ( j = 1; j <= n; j++ )
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
