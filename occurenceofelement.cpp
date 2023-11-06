#include<stdio.h>
int main()
{
	int n, i, k, o=0;
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
	printf("\nEnter the number k for which occurence has to be tested\n");
	scanf("%d", &k);
	for ( i = 0; i < n; i++ )
	{
		if ( a[i] != k );
		else
		{
			o++;
		}
	}
	printf("Ocurence of %d in the array is %d", k, o);
	return 0;
}
