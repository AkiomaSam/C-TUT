/* 
	program to print pattern of type
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
	if given n = 5
*/
#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter number of lines you want\n");
	scanf("%d", &n);
	printf("\n");
	// for loop to go into new lines
	for ( i = 1; i <= n; i++ )
	{
		// for loop for printing numbers
		for ( j = 1; j <= i; j++ )
		{
			printf("%d ", i);
		}
		printf("\n");
	}


	return 0;
}
