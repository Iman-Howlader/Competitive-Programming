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
bool prime[90000001];
int n = 90000000;
vector<int> v;

/// @brief Seive Algorithm
void solve()
{
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
            v.push_back(i);
    }
}
int main()
{

    fast;
    solve();
    int x;
    testcase
    {
        cin >> x;
        cout << v[x - 1] << nl;
    }
    return 0;
}
