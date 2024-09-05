/**
 *   Author : iman321
 *   Created: 2024-03-08 20:35:13
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int l, a, b;
    cin >> a >> b >> l;

    set<int> st;
    long long tmp;
    for (int i = 0; pow(a, i) <= l; i++)
    {
        for (int j = 0; pow(b, j) <= l; j++)
        {
            tmp = pow(a, i) * pow(b, j);
            if (l % tmp == 0)
            {
                st.insert(l / tmp);
            }
        }
    }
    cout << st.size() << endl;
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