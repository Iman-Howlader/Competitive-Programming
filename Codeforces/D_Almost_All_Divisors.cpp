/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long int
#define ull unsigned long long int

#define ve vector<ll> vect
#define pb(x) push_back(x)
#define vein2(n)               \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        vect.push_back(x);     \
    }
#define vein(n)                 \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vect.push_back(x);      \
    }
#define veout(v)          \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
#define sorting(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define mn(a) (min_element((a).begin(), (a).end()) - (a).begin())
#define mx(a) (max_element((a).begin(), (a).end()) - (a).begin())

#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define YES1 cout << "Case " << case ++ << ": YES\n"
#define NO1 cout << "Case " << case ++ << ": NO\n"
#define precision(n) fixed << setprecision(n)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

#define yes cout << "yes\n";
#define Yes cout << "Yes\n ";
#define YES cout << "YES\n"

#define no cout << "no\n";
#define No cout << "No\n";
#define NO cout << "NO\n"
const int N = 1e5;

void solve()
{
    int n;
    cin >> n;
    ve;
    vein(n);
    sort(all(vect));
    ull x = vect[0] * vect[n - 1];
    vector<ll>b;
    for (ull i = 2; i * 1ll * i <= x; i++)
    {
        if (x % i == 0)
        {
            b.pb(i);
            if (x / i != i)
                b.pb(x / i);
        }
    }
    sorting(b);
    if (vect == b)
        cout << x << nl;
    else
        cout << "-1" << nl;
}
int main()
{
    fast;
    test
    {
        solve();
    }
    return 0;
}
