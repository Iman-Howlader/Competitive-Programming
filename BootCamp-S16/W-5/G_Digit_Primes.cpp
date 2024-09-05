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
template<typename T>T lcm(T a,T b){return a/gcd(a,b)*b;}
 
 //-----------------------Code Start From here-----------------------------------------------
 
 const int N = 1e6+1;
 bool S[N + 1];
 vector<int>a(N);
 int digSum(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
    
}
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
    int cnt=0;
    for (size_t i = 0; i <=N; i++)
    {
        if(!S[i] &&  !S[digSum(i)])
        {
            cnt++;
        }
        a[i]=cnt;
    }

    
}


void solve()
{
    bool flg=false;
    int n,m,cnt=0;
    
    //out(a);
    cin>>n>>m;
    int ans=a[m]-a[n];
    if(!S[n]&&!S[digSum(n)])
    {
        ans++;
    }
    cout<<ans<<nl;

    
    
}
int main()
{
    fast;
    seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
