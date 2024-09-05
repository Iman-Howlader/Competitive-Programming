/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int> vect
#define pb(x) push_back(x)
#define inp(n, vect)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vect.push_back(x);      \
    }

#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
bool is_prime(int n)
{
    if(n<=1) return false;
    if(n==2) return true;
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
    
}
void solve()
{
    int n,m,x;
    bool flag=true;
    cin>>n>>m;
    for (int i = n+1;; i++)
    {
        if(is_prime(i))
        {
            x=i;
            break;
        }
    }
    if(x==m) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    
    

}
int main()
{
    fast;
    //test
    {
        solve();
    }
    return 0;
}
