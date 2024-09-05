/**
 *   Author : iman321
 *   Created: 2024-03-12 11:35:06
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        if (i <= n - 5 && s.substr(i, 5) == "mapie")
        {
            cnt++;
            i += 5;
        }
        else if (i <= n - 3 && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
        {
            cnt++;
            i += 3;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << endl;
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