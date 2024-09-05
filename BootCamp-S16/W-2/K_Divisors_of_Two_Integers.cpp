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
    cin >> n;
    multiset<int> a;
    vector<int> b;
    while (n--)
    {
        cin >> x;
        a.insert(x);
    }

    auto it = *prev(a.end());
    for (int i = 1; i <= it; i++)
    {
        if (it % i == 0)
            a.erase(a.find(i));
    }
    int y;
    for(auto z: a)
    {
        cout<<z<<" ";
    }
    if (a.size() == 0)
    {
        y = it;
    }
    else
    y = *max_element(a.begin(), a.end());
    cout << it << " " << y << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
