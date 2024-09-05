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
    string s;
    string n = "9";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < n)
            n = s[i];
    }
    cout << n << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
