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
    int n, x;
    multiset<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    
    x = *prev(a.end());
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            a.erase(a.find(i));
        }
    }
    int y=*prev(a.end());
    cout<<x<<" "<<y<<nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
