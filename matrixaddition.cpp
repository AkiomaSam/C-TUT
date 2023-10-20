#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter number of rows you want for matrix\n");
    scanf("%d", &m);
    printf("Enter number of columns you want for matrix\n");
    scanf("%d", &n);
    printf("\n");
    int a[m][n], b[m][n], c[m][n];
    // making c as null matrix
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            c[i][j] = 0;
        }
    }
    // 1st matrix
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            if ( i == j )
            a[i][j] = 1;
            else 
            a[i][j] = 0;
        }
    }
    // 2nd matrix
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            if ( i == j )
            b[i][j] = 1;
            else 
            b[i][j] = 0;
        }
    }
    // adding a and b into result as c
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing c
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;   
}