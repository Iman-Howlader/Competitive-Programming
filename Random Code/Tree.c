#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        scanf("%d", &n);
        int l = (n + 10) / 2 + 1;
        int space = (n + 10) / 2;
        int tmp = 1;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < space; j++)
            {
                printf(" ");
            }
            space--;
            for (int k = 0; k < tmp; k++)
            {
                printf("*");
            }
            printf("\n");
            tmp += 2;
        }
        space = 5;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < space; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
