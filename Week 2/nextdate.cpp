// This program is used to print the next date
#include<stdio.h>
int main()
{
    // d is date
    // m is month
    // y is year
    // l = 1 is leap year   = 0 if not
    // v = 1 if date is valid  = 0 if invalid
    int d , m , y , l , v , D , M , Y;
    // Input of date
    printf("Enter date\n");
    scanf("%d", &d);
    printf("Enter month\n");
    scanf("%d", &m);
    printf("Enter year\n");
    scanf("%d", &y);
    M = m;
    Y = y;
    // Checking Leap Year
    if ( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0 ) ) l = 1;
    else l = 0;
    // Checking Validity
    if ( y < 1 || m < 1 || m > 12 || d < 1 || d > 31 ) v = 0;
    else if ( ( l == 1 && m == 2 && d == ( 30 || 31 ) ) || ( l == 0 && m == 2 && d == ( 29 || 30 || 31 ) ) ) v = 0;
    else if ( m == ( 4 || 6 || 9 || 11 ) && d == 31 ) v = 0;
    else v = 1;
    // Defining next date
    if ( d == 13 && m == 12 )
    {
        D = 1;
        M = 1;
        Y = y + 1;
    }
    else if ( ( d == 30 && m == ( 4 || 6 || 9 || 11 ) ) || ( m == 2 && d == ( 28 || 29 ) ) || d == 31 )
    {
        D = 1;
        M = m + 1;
    }
    else D = d + 1;
    // Printing next date and invalid input
    if ( v )
    printf("The next date of %d / %d / %d is %d / %d / %d ", d, m, y, D, M, Y);
    else 
    printf("Invalid Input");
    return 0;
}