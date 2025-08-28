#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix printing:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int element = n * m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (element == count)
    {
        printf("\nAns: ZeroMatrix\n");
    }
    else
    {
        printf("\nAns: Not ZeroMatrix\n");
    }
    return 0;
}