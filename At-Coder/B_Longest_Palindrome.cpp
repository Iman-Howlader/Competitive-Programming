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


void solve()
{
    string s;
    cin >> s;
    
    string s2 = s,g=s;
    reverse(all(s));
    string t=s;
    int j = s2.size();
    int k = j;
    if (s == s2)
    {
        cout << s.size();
    }
    else
    {
        for (int i = 1; i < s2.size(); i++)
        {
            s=g;
            s2=t;
            s.erase(0, i);
            s2.erase(--j, k);
            cout << s << " " << s2 << nl;
            if (s == s2)
            {
                cout << s.size() << nl;
                break;
            }
            
        }

        if (s.size() == 0 || s2.size() == 0)
            cout << "1\n";
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
