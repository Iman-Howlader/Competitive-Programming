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
    int n, cnt, x = 1;
    testcase
    {
        cnt = 0;
        cin >> n;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    cnt++;
                if ((n / i) != i)
                {
                    if ((n / i) % 2 == 0)
                        cnt++;
                }
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
