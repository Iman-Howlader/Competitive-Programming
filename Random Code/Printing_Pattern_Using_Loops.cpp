#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[n][n] = {0};
    cin >> n;
    int m = n;
    for (int i = 2 * n; i > 0; i--)
    {
        for (int j = 2 * n; j > 0; j--)
        {
            if (n>0)
            {
                arr[i][j] = n;
            }
            else
            {
                n+=2;
            }
        }
        n--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}