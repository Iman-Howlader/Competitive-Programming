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
    string ss = "hello";
    int j = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ss[j])
        {
            j++;
        }
    }
    if (j == ss.size())
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main()
{

    fast;
    solve();
    return 0;
}
