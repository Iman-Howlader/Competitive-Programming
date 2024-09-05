/**
 *   Author : iman321
 *   Created: 2024-04-06 11:00:18
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        for (int j = 0; j < x; j++)
        {
            if (s[j] == 'D')
            {
                a[i]++;
            }
            else
            {
                a[i]--;
            }
            
            if (a[i] == -1)
            {
                a[i] = 9;
            }
            else if (a[i] == 10)
            {
                a[i] = 0;
            }
        }
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
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