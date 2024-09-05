/**
*   Author : iman320
*   Created: 2023-12-01 22:31:26
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
/*const ll N = 2e7 + 7;
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
}*/
/*
    Problem Link:
    Solution Idea:
*/
/*********************************Code Start From Here************************************/
int Binary_search(vector<int>&a, int target)
{
    int low=0,high=a.size()-1;
    int ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
    
}
void solve()
{
    int n,q,x;
    cin>>n>>q;
    vector<int>a;
    inp(n,a);
    while (q--)
    {
        cin>>x;
        cout<<Binary_search(a,x)<<nl;
    }
}
int main()
{
    fast;
    // seive();
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
