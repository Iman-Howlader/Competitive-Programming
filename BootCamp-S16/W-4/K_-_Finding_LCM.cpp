/*-----------------------------------------------------
|  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ                           |
|  Iman Howlader                                     |
|  Hello!! Welcome to my code !!                      |
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

const int N=2e7;
bool S[N+1]={0};
void seive()
{
    S[0]=S[1]=true;
    for (size_t i = 2; (ll) i*i <=N; i++)
    {
        if(S[i]==false)
        {
            for (size_t j = i*i; j <=N; j+=i)
            {
                S[j]=true;
            }
        }
    }    
}
ll cs=1;
/*********************************Code Start From Here************************************/
ll lcm(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}
void solve()
{
    ll a,b,l,c;
    cin>>a>>b>>l;
    ll x=lcm(a,b);
    if(l%x!=0)
    {
        cout<<"Case "<<cs++<<": impossible"<<nl;
    }
    else
    {
        ll c=(l/x);
        ll y=gcd(c,x);
        while (y!=1)
        {
            c*=y;
            x/=y;
            y=gcd(c,x);
        }
        cout<<"Case "<<cs++<<": "<<c<<nl;
    }
}
int main()
{
    fast;
    //seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
