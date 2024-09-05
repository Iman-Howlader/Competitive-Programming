/**
 *   Author : iman321
 *   Created: 2024-04-03 19:08:22
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            break;
        cout<<s[i];
    }
}
int main()
{
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}