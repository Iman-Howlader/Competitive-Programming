/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int> vect
#define pb(x) push_back(x)
#define inp(n, vect)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vect.push_back(x);      \
    }

#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

void solve()
{
    int t, z = 0, n = 0;
    string s;
    cin >> t >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'z')
            z++;
        if (s[i] == 'n')
            n++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < z; i++)
    {
        cout << 0 << " ";
    }
}
int main()
{
    fast;
    // test
    {
        solve();
    }
    return 0;
}
