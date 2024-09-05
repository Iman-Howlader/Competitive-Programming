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
const int n = 1300000;
bool seive[n + 1] = {0};
ve;
vector<int>twin[n];
void solve()
{
    seive[0] = seive[1] = true;
    for (int i = 2; (ll)i * i <= n; i++)
    {
        if (!seive[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                seive[j] = true;
            }
        }
    }
    for (size_t i = 0; i <= n; i++)
    {
        if (!seive[i])
            vect.pb(i);
    }
    int j=1;
    for (size_t i = 1; i <=n; i++)
    {
        if(!seive[i] && !seive[i+2])
        {
            twin[j++]=i;
        }
    }
    
}
int main()
{
    fast;
    int x, cnt = 0;
    solve();
    while (cin >> x)
    {
        
        cout<<twin.siz<<nl;
    }
}
