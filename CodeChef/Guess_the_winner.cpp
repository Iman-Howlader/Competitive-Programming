/**
*   Author : iman320
*   Created: 2023-11-01 21:56:28
**/
#include <bits/stdc++.h>
using namespace std;
#define    fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define    nl                    '\n'
#define    ll                     long long
#define    ve                     vector<int>
#define    pb(x)                  push_back(x)
#define    pp                     pop_back()
#define    all(x)                 x.begin(), x.end()
#define    gcd(a, b)              __gcd(a, b)
#define    prec(n)                fixed << setprecision(n)
#define    yes                    cout << "YES\n";
#define    no                     cout << "NO\n";
#define    css                    cout<<"Case "<<cs++<<": "
#define    loop(x,v,n)            for(int x=v;x<n;x++)
#define    rloop(x,v,n)           for(int x=n-1;x>=v;x--)
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
bool is_prime(ll n)
{
    if(n<=1)
    {
        return false;
    }
    if(n<=3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(ll i=5;i*i<=n;i+=6)
    {
        if(n%i==0|| n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"Bob"<<nl;
    }
    else if(is_prime(n))
    {
        cout<<"Alice"<<nl;
    }
    else
    {
       for(ll i=3;i<=n;i+=2)
       {
        if(n%i==0 && is_prime(i))
        {
            cout<<"Alice"<<nl;
            return;
        }
       }
       cout<<"Bob"<<nl;
    }

}
int main()
{
    fast;
    //seive();
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
