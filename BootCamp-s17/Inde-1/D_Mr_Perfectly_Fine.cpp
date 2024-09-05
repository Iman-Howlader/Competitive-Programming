/**
 *   Author : iman321
 *   Created: 2024-04-05 12:57:39
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    int x = INT_MAX, y = INT_MAX, val;
    string s;
    vector<int> tmp;
    while(n--)
    {

        cin >> val >> s;
        if (s == "01")
        {
            y = min(y, val);
        }
        else if (s == "10")
        {
            x = min(x, val);
        }
        else if (s == "11")
        {
            tmp.push_back(val);
        }
    }

    if ((x == INT_MAX || y == INT_MAX) && tmp.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        if (x != INT_MAX && y != INT_MAX)
            tmp.push_back(x + y);
        cout<<*min_element(tmp.begin(),tmp.end())<<endl;
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