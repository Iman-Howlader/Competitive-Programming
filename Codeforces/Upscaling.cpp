/**
 *   Author : iman321
 *   Created: 2024-03-28 21:25:17
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m = 2;
        while (m--)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 1)
                {
                    cout << "..";
                }
                else
                {
                    cout << "##";
                }
            }
            cout << "\n";
        }
    }
}
int main()
{
    fast;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}