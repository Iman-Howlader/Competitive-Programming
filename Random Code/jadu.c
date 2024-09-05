#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    if (row != col)
    {
        printf("NO\n");
        return 0;
    }
    int flag = 0, check = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
            if ((i == j && arr[i][j] == 1) || ((i + j) == (row - 1) && arr[i][j] == 1) || (i != j && (i + j) != (row - 1) && arr[i][j] == 0))
            {
                continue;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
}