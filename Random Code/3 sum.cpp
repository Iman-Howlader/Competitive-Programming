#include <bits/stdc++.h>
using namespace std;
bool ThreeSum(vector<int> &a, int sum)
{
    int n = a.size();

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        vector<int> A(N);
        bool found = false;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        if (ThreeSum(A, S))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}