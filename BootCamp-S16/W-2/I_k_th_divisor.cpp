#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define nl "\n"

void solve()
{
    long long int a, b;
    cin >> a >> b;
    vector<long long int> v;
    for (long long int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
            if (a / i != i)
            {
                v.push_back(a / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size() >= b)
        cout << v[b - 1] << nl;
    else
        cout << "-1" << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
