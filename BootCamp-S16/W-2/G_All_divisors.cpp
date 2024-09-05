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
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if ((n / i) != i)
            {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    for (auto x : a)
        cout << x << " ";
}
int main()
{

    fast;
    solve();
    return 0;
}
