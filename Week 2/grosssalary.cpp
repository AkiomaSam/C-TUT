// This program is used to calculate the gross salary of an employee by knowing in which tier city they are living and their basic salary
// DA means Dearness Allowance
// HRA means House Rent Allowance
#include<stdio.h>
int main()
{
    float b,g,h;
    int t;
    printf("If the employee if from tier 1 city, then enter 1\n");
    printf("If the employee if from tier 2 city, then enter 2\n");
    printf("If the employee if from tier 3 city, then enter 3\n");
    printf("If the employee if from metropolitan city, then enter 4\n");
    scanf("%d", &t);
    printf("Enter the basic salary of the employee\n");
    scanf("%f", &b);
    printf("\n");
    if ( t == 1 )
    {
        h = 24;
    }
    else if ( t == 2 )
    {
        h = 16;
    }
    else if ( t == 3 )
    {
        h = 12;
    }
    else if ( t == 4 )
    {
        h = 27;
    }
    else
    {
        printf("Entered input is invalid\n");
    }
    g = b * ( 1.52 + ( h / 100 ));
    printf("The gross salary of employee is %f\n",g);
    return 0;
}