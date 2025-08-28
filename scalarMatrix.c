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
            if (arr[i][j]==arr[0][0])
            {
                continue;
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    
    if(flag==1){
        printf("Ans : Scalar Matrix");
    }
    else{
        printf("Ans : Not Scalar Matrix");
    }
    return 0;
}