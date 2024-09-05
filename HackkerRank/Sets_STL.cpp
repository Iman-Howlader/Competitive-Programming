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
    set<int> a;

    int x, y;
    testcase
    {
        cin >> x >> y;
        if (x == 1)
        {
            a.insert(y);
        }
        if (x == 2)
        {
            a.erase(y);
        }
        if (x == 3)
        {
            auto it = a.find(y);
            if (it != a.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
