/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                     '\n'
#define ll                     long long
#define ve                     vector<int>
#define pb(x)                  push_back(x)
#define pp                     pop_back()
#define all(x)                 x.begin(), x.end()
#define gcd(a, b)              __gcd(a, b)
#define prec(n)                fixed << setprecision(n)

#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);      \
    }
#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;

/***************************||Code Start From Here||************************************/
int cs=1;
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=gcd(abs(a-c),abs(b-d))+1;
    cout<<"Case "<<cs++<<": "<<x<<nl;
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
