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
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    
    /*
    Secondary Diagonal matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i =n-1)
            {
                continue;
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
        */
    if(flag==1){
        printf("Diagonal Matrix");
    }
    else{
        printf("Not Diagonal Matrix");
    }
    return 0;
}