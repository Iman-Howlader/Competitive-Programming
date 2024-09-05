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
    int n, k, x;
    cin >> n >> k;
    map<int, int> mp;
    map<int, int> mp2;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        a.insert(x);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        mp2[x]++;
        a.insert(x);
    }
    int ans=0;
    for (auto x : a)
    {
        auto it=mp.find(x);
        auto it2=mp2.find(x);
        if(it->second>=it2->second)
        {
            ans+=it->second-it2->second;
        }
        else
        {
            ans+=it2->second-it->second;
        }
    }
    cout<<ans<<nl;
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
