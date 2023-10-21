// This program is used to calculate simple interest (SI) and compound interest (CI)
// This program can also be used to calculate the total amount to be paid after adding interests
#include<stdio.h>
// Including math.h so that power function will work
#include<math.h>
int main()
{
    printf("If to calculate simple interest and total amount enter 1\n");
    printf("If to calculate compound interest and total amount enter 2\n");
    float a;
    scanf("%f", &a);
    if (a == 1)
    {
        float p,t,r;
        printf("Enter Principal Amount\n");
        scanf("%f", &p);
        printf("Enter time duration (tenure) of loan in years\n");
        scanf("%f", &t);
        printf("Enter rate of interest of the loan in %%\n");
        scanf("%f", &r);
        printf("The Simple interest is %f\n", p*t*r/100);
        printf("The total amount to be paid is %f\n", p*(1+(r*t)));
    }
    else if (a == 2)
    {
        float p,r,A,t;
        printf("Enter Principal Amount\n");
        scanf("%f", &p);
        printf("Enter time duration (tenure) of loan in years\n");
        scanf("%f", &t);
        printf("Enter rate of interest of the loan in %%\n");
        scanf("%f", &r);
        A = ( p * pow((1 + r / 100), t) );
        printf("\nThe Compound interest is %f\n\n",A-p);
        printf("The total amount to be paid is %f\n",A);
    }
    else 
    {
        printf("Wrong Input\n");
    }
    return 0;
}