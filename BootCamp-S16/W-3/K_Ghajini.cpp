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
int cs=1;
/*********************************Code Start From Here************************************/
void solve()
{
    int n,d;
    cin>>n>>d;
    ve a;
    inp(n,a);
    //out(a);
    multiset<int>b;
    for(int i=0;i<d;i++)
    {
        b.insert(a[i]);
    }
    
    // set: 0,6
    int mx_df=*prev(b.end())-*b.begin(); 
    //cout<<mx_df<<nl;  
    int x;
    for (size_t i = d; i<n; i++)
    {
        b.insert(a[i]); 
        //out(b);
        b.erase(b.find(a[i-d]));
        //out(b);
        x=*prev(b.end())-*b.begin();
        //cout<<"x= "<<x<<nl;
        if(mx_df<x)
        {
            mx_df=x;
        }
        //cout<<"mx-df "<<mx_df<<nl;
    }
    cout<<"Case "<<cs++<<": "<<mx_df<<nl;   
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
