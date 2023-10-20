#include <stdio.h>
int main()
{
    int p, m, n, i, j, k;
    printf("Enter number of rows you want for matrix 1\n");
    scanf("%d", &m);
    printf("Enter number of columns you want for matrix 1 or number of rows you want for matrix 2\n");
    scanf("%d", &n);
    printf("Enter number of rows you want for matrix 2\n");
    scanf("%d", &p);
    printf("\n");
    int a[m][n], b[n][p], c[m][p];
    // making c as null matrix
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < p; j++ )
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
    for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j < p; j++ )
        {
            if ( i == j )
            b[i][j] = 1;
            else 
            b[i][j] = 0;
        }
    }
    // multiplicating a and b into result as c
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < p; j++ )
        {
            for ( k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // printing c
    for ( i = 0; i < m; i++ )
    {
        for ( j = 0; j < p; j++ )
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;   
}