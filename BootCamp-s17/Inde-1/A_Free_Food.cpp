/**
 *   Author : iman321
 *   Created: 2024-04-03 18:55:43
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
set<int> ans;
void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        ans.insert(i);
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
    cout<<ans.size()<<endl;
}