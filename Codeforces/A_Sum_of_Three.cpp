#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
/*********************************Code Start From Here************************************/
void solve()
{
    int n;
    cin >> n;
    set<int> a;
    a.insert(1);
    for (size_t i = 2; i < n;)
    {
        if (i % 3 != 0 && (n - i - 1) % 3 != 0)
        {
            a.insert(i);
            a.insert(n - i - 1);
            break;
        }
        else
        {
            i++;
        }
    }
    if (a.size() == 3)
    {
        yes;
        out(a);
    }
    else
        no;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
