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
    ll a, b, sum = 0, x;
    cin >> a >> b;
    vector<ll> vect;
    inp(a, vect);
    sort(all(vect), greater<int>());
    int total=0,prevParches=0;
    for (size_t i = 0; i <vect.size(); i++)
    {
        total+= (prevParches+1)*vect[i];
        if((i+1)%b==0)
        {
            prevParches++;
        }
    }
    cout<<total<<nl;
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
