#include<stdio.h>
int main()
{
	float phy, che, bio, mat, com;
	printf("Enter marks obtained in physics:\n");
	scanf("%f", &phy);
	printf("Enter marks obtained in chemistry:\n");
	scanf("%f", &che);
	printf("Enter marks obtained in biology:\n");
	scanf("%f", &bio);
	printf("Enter marks obtained in mathematics:\n");
	scanf("%f", &mat);
	printf("Enter marks obtained in computer:\n");
	scanf("%f", &com);
	float v;
	v = (phy+che+bio+mat+com)/5;
	printf("The percentage marks of the students in 5 different subjects is %f %%\n", v);
	if ( v>=90 )
	printf("Hence the student attained A grade\n");
	else if ( v>=80 )
	printf("Hence the student attained B grade\n");
	else if ( v>=70 )
	printf("Hence the student attained C grade\n");
	else if ( v>=60 )
	printf("Hence the student attained D grade\n");
	else if ( v>=40 )
	printf("Hence the student attained E grade\n");
	else
	printf("Hence the student attained F grade\n");
	return 0;
}
