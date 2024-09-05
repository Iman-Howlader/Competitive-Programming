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

    testcase
    {
        string s;
        int a = 0, b = 0, cnt = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                a = i;
                break;
            }
        }
        for (int i = s.size(); i > a; i--)
        {
            if (s[i] == '1')
            {
                b = i;
                break;
            }
        }
        if (b != 0)
        {
            for (int i = a; i <= b; i++)
            {
                if (s[i] == '0')
                    cnt++;
            }
        }
        cout << cnt << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
