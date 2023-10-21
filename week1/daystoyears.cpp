// This program is used to convert days into years
#include<stdio.h>
int main()
{
    int d,y,x;
    printf("Enter number of days\n");
    scanf("%d", &d);
    y = d / 365;
    x = d % 365;
    printf("Number of years for the entered number of days is %d YEARS and %d DAYS", y, x);
    return 0;
}