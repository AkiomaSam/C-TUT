#include<stdio.h>
int main()
{
    int m, n, i, j, k, p;
    printf("Enter number of rows in the matrix\n");
    scanf("%d", &m);
    printf("Enter number of columns in the matrix\n");
    scanf("%d", &n);
    int a[m][n], e[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d row %d column element\n", i+1, j+1);
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            e[i][j] = 1;
        }
    }
    printf("Enter the exponent on matrix\n");
    scanf("%d", &p);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for ( k = 0; k < p; k++ )
            {
                e[i][j] *= a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d \t", e[i][j]);
        }
        printf("\n");
    }

    return 0;
}