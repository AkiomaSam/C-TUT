// This program is used to convert kilometer into metre, centimeter and millimeter
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the distance in kilometers (km)\n");
    scanf("%f", &a);
    b = a*1000;
    c = a*100000;
    d = a*1000000;
    printf("The entered distance %f kilometers in meters is %f\n", a, b);
    printf("The entered distance %f kilometers in centi meters is %f\n", a, c);
    printf("The entered distance %f kilometers in milli meters is %f\n", a, d);
    return 0;
}