/**
 *   Author : iman321
 *   Created: 2024-04-03 19:13:13
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int a, b, c;
void func()
{
    if (a > b)
        cout << ">";
    else if (a < b)
    {
        cout << "<";
    }
    else
    {
        cout << "=";
    }
}
void solve()
{
    cin >> a >> b >> c;
    if (a > 0 && b > 0)
    {
        func();
    }
    else
    {
        if (c % 2 == 0)
        {
            a = abs(a);
            b = abs(b);
            func();
        }
        else
        {
            func();
        }
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