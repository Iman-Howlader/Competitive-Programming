/**
 *   Author : iman320
 *   Created: 2023-11-17 20:52:44
 **/
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
#define css cout << "Case " << cs++ << ": "
#define loop(x, v, n) for (int x = v; x < n; x++)
#define rloop(x, v, n) for (int x = n - 1; x >= v; x--)
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
template <typename T>
T lcm(T a, T b) { return a / gcd(a, b) * b; }
int cs = 1;

//----------------------------------------seive algorithm------------------------//
const ll N = 2e7 + 7;
bool S[N + 1];
vector<ll> primes;
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
    for (size_t i = 2; i <= N; i++)
    {
        if (!S[i])
        {
            primes.push_back(i);
        }
    }
}
/*
    Problem Link:
    Solution Idea:
*/
/*********************************Code Start From Here************************************/

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>div;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            if(i*i!=n)
            {
                div.push_back(n/i);
            }
        }
    }
    ll ans=0;
    for(auto segSize: div)
    {
        ll mn=LLONG_MAX ,mx=0;
        ll sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            cnt++;
            if(cnt==segSize)
            {
                mn=min(mn,sum);
                mx=max(mx,sum);
                cnt=0;
                sum=0;
            }
        }
        ans=max(ans,mx-mn);

    }
    cout<<ans<<nl;
}
int main()
{
    fast;
    // seive();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
