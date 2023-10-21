// In this program two floating point numbers will be multiplied
// The answer is printed in both integer and floating-point representations
#include<stdio.h>
int main()
{
    float a,b;
    int c;
    printf("Enter floating number a\n");
    scanf("%f", &a);
    printf("Enter floating number b\n");
    scanf("%f", &b);
    c = a*b;
    printf("Product of entered floating numbers in integer representation is %d\n", c);
    printf("Product of entered floating numbers in floating-point representation  is %f\n", a*b);
    return 0;
}