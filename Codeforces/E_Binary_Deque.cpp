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
        int n, k, x, sum = 0, cnt = 0;
        deque<int> a;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            a.push_back(x);
        }
        if (sum < k)
            cout << "-1" << nl;
        else if (sum == k)
        {
            cout << "0" << nl;
        }
        else
        {
            // while ()
            // {

            // }
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
