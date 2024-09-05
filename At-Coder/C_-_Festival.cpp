/*-----------------------------------------------------
|  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ                           |
|  Iman Howlader                                      |
|  Hello!! Welcome to my code !!                      |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int>
#define pb(x) push_back(x)
#define pp pop_back()
#define all(x) x.begin(), x.end()
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define cs       \
    int css = 1; \
    cout << "Case " << css++;
#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);       \
    }
#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;

bool flg = false;
/*********************************Code Start From Here************************************/
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1);
    for (size_t i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    int x = 1, y;
    for (int i = 1; i <= n; i++)
    {
        if (i == a[x])
        {
            cout << 0 << nl; x++;
        }
        else
        {
            cout << a[x] - i << nl;
        }
    }
}
int main()
{
    fast;
    // seive();
    ll t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}
