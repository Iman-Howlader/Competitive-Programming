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
map<ll,pair<ll,ll>>tp;
void tPrime()
{
    ll x=1;
    for (size_t i = 2; i <=N; i++)
    {
        if(!S[i]&& !S[i+2])
        {
            tp[x]={i,i+2};
            x++;
        }
    }
}
void solve()
{
    ll n;
    while (cin>>n)
    {
        cout<<"("<<tp[n].first<<", "<<tp[n].second<<")"<<nl;
    }
}
int main()
{
    seive();
    tPrime();
    fast;
    ll t;
    //cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}
