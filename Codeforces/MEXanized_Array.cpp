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
    int n, k, x, sum = 0;
    cin >> n >> k >> x;
    int i = 0;
    vector<int> a;
    while (n--)
    {

        if (i != x)
        {
            a.push_back(i);
            i++;
        }
        else if(i==x)
        {
            break;
        }
    }
    while (n--)
    {
        if (x % 2 == 0)
        {
            a.pb(x-1);
        }
    }
    out(a);
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
