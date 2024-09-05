#include <bits/stdc++.h>
using namespace std;
#define fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
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
template<typename T>T lcm(T a,T b){return a/gcd(a,b)*b;}
int cs=1;
/*const int N = 2e7;
bool S[N + 1] = {0};
void seive()
{
    S[0] = S[1] = true;
    for (ll i = 2; (ll)i * i <= N; i++)
    {
        if (S[i] == false)
        {
            for (size_t j = i * i; j <= N; j += i)
            {
                S[j] = true;
            }
        }
    }
}
/*********************************Code Start From Here************************************/
void solve()
{
    ll n,q,x,y,l,r,s;
    cin>>n;
    deque<ll> a(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //out(a);
    a[n]=0;
    for (int i = n-1; i>=0; i--)
    {
          a[i]+=a[i+1];
    }
    //out(a);
    cin>>q;
    while (q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>l>>r;
            s=a[l-1]-a[r];
           
            cout<<s<<nl;
        }
        else
        {
            cin>>y;
            a.push_front(y+a.front());
        }
    }
    //out(pre);
    
    
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
