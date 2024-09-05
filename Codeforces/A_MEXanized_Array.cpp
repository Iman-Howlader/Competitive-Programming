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
    //ve;
    if (n < k || x < k - 1)
    {
        cout << -1 << nl;
        return;
    }
    else
    {
        int y=k;
        while (k--)
        {
            //vect.push_back(i);
            sum += i;
            i++;
        }
        n = n - y;
        while (n--)
        {
            if (x == y)
            {
                //vect.push_back(x-1);
                sum += (x - 1);
            }
            else
            {
                //vect.push_back(x);
                sum += (x);
            }
        }
    }
    //out(vect);
    cout << sum << nl;
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
