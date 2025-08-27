#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    int sum1 = 0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix printing:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if (i+j==n-1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }
     printf("%d\n",sum1);
     printf("%d",sum2);

    return 0;
}