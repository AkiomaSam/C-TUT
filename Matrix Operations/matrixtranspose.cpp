#include<stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter number of rows in the matrix\n");
    scanf("%d", &m);
    printf("Enter number of columns in the matrix\n");
    scanf("%d", &n);
    int a[m][n], t[n][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d row %d column element\n", i+1, j+1);
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d \t", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}