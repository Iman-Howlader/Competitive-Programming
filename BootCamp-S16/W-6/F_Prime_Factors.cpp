/*
    author: iman320
    Created: 2023-10-17 23:59:08
*/
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
#define css                    cout<<"Case "<<cs++<<": "
#define loop(x,v,n)            for(int x=v;x<n;x++)
#define rloop(x,v,n)           for(int x=n-1;x>=v;x--)
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
const int N = 2e7;
vector <ll>primes;
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
    for (size_t i =2; i <=N; i++)
    {
        if(!S[i])
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
vector<int> prime_fact(int n)
{
    vector<int>a;
    for(auto it:primes)
    {
        if(it*it>n)
        {
            break;
        }
        while (n%it==0)
        {
            n/=it;
            a.push_back(it);
        }
    }
    if(n>1)
    {
        a.push_back(n);
    }
    return a;
}
void solve()
{
    int n;

    while (cin>>n)
    {
        int m=n;
        if(n==0)
        {
            return;
        }
        vector<int>fact=prime_fact(abs(n));
        cout<<m<<" = ";
        if(m<0) cout<<-1<<" x ";
        for (size_t i = 0; i <fact.size(); i++)
        {
            cout<<fact[i];
            if(i!=fact.size()-1)
            {
                cout<<" x ";
            }
        }
        
        cout<<nl;
    }
    
}
int main()
{
    fast;
    seive();
    int t=1;
    //cin >> t;
    //cout<<primes.size()<<nl;
    while (t--)
    {
        solve();
    }
    return 0;
}
