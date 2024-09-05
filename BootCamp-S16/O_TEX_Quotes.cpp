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
    char s;
    int cnt = 0;
    while (scanf("%c",&s))
    {
        if (s == '"')
        {
            cnt++;
            if (cnt % 2 == 0)
                cout << "''";
            else
                cout << "``";
        }
        else
            cout << s;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
