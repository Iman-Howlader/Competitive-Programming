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
    string s;
    getline(cin, s);
    stringstream ss(s);
    int n;
    ve;
    while (ss >> n)
    {
        vect.pb(n);
    }
    //out(vect);
    int ans = 0, x;
    for (size_t i = 0; i < vect.size() - 1; i++)
    {
        for (size_t j = i + 1; j < vect.size(); j++)
        {
            x = gcd(vect[i], vect[j]);
            if (ans < x)
            {
                ans = x;
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    fast;
    
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
