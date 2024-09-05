/*-----------------------------------------------------
|  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ                           |
|  Iman Howlader                                      |
|  Hello!! Welcome to my code !!                      |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long
#define ve                     vector<int>
#define pb(x)                  push_back(x)
#define pp                     pop_back()
#define all(x)                 x.begin(), x.end()
#define gcd(a, b)              __gcd(a, b)
#define prec(n)                fixed << setprecision(n)
#define yes                    cout << "YES\n";
#define no                     cout << "NO\n";
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


/*********************************Code Start From Here************************************/
void solve()
{
    bool flg=false,flg2=false;
    int a,b;
    string s,s2;
    cin>>a>>b>>s>>s2;
    
    for (size_t i = 0; i <a; i++)
    {
        if(s[i]!=s2[i])
        {
            flg=true;
        }
    }
    int x=s2.size()-a;
    
    for (size_t i = 0; i <a; i++)
    {
        
        if(s[i]!=s2[x])
        {
            flg2=true;
        }
        x++;
    }
    if(!flg && !flg2) cout<<0<<nl;
    else if(!flg && flg2) cout<<1<<nl;
    else if(flg && !flg2) cout<<2<<nl;
    else cout<<3<<nl;

    
}
int main()
{
    fast;
    // seive();
    ll t;
    //cin >> t;
    //while (t--)
    {
        solve();
    }
    return 0;
}
