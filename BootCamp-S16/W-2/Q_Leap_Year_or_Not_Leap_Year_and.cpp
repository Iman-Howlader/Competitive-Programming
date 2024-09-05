/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#define dbg(...)
#endif

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long

#define ve vector<int> vect
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

bool divisible(string s, int n)
{
    int rem = 0;
    for (auto x : s)
    {
        rem = (rem * 10 + (x - '0')) % n;
    }
    return (rem == 0);
}
void solve()
{
    bool flg = false;
    string s;
    while (cin >> s)
    {
        if (flg)
            cout << nl;
        bool leap = (divisible(s, 4) && !divisible(s, 100)) || divisible(s, 400);
        bool hulu = divisible(s, 15);
        bool bulu = divisible(s, 55) && leap;
        bool ord = !leap && !bulu && !hulu;
        if (leap)
            cout << "This is leap year.\n";
        if (hulu)
            cout << "This is huluculu festival year.\n";
        if (bulu)
            cout << "This is bulukulu festival year.\n";
        if (ord)
            cout << "This is an ordinary year.\n";
        flg = true;
    }
}
int main()
{
    // fast;
    // test
    {
        solve();
    }
    return 0;
}
