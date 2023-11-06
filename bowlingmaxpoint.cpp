#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Enter points for bowling technique 1\n");
	scanf("%f", &a);
	printf("Enter points for bowling technique 2\n");
	scanf("%f", &b);
	printf("Enter points for bowling technique 3\n");
	scanf("%f", &c);
	if ( a>b & a>c )
	printf("Bowling technique 1 is best\n");
	else if ( b>c )
	printf("Bowling technique 2 is best\n");
	else
	printf("Bowling technique 3 is best\n");
	return 0;
}




























