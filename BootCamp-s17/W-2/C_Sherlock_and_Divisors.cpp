/**
 *   Author : iman321
 *   Created: 2024-03-06 21:52:55
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

vector<int> all_divisor(int n)
{
    vector<int> ans;
    for (int i = 2; i * 1ll * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    ans.push_back(n);
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> a = all_divisor(n);
    for (int x : a)
    {
        if (x % 2 == 0)
            cnt++;
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