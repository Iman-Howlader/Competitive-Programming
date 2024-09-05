/**
 *   Author : iman321 
 *   Created: 2024-05-08 20:53:15
**/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nl '\n'
#define fix(x) fixed << setprecision(x)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define read(x) cin >> x;
#define write(x) cout << x;
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define inputV(x, n)            \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define mod 1e9 + 7
#define INF 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

int tariling_zeros(int n)
{
    int cnt=0;
    while (n/5>0)
    {
        cnt+=n/5;
        n=n/5;
    }
    return cnt;
    
}
void solve()
{
    int m;
    cin >> m;

    vector<int>a;
    int cnt=0;
    for(int i=1;i<=100000;i++)
    {
        if(tariling_zeros(i)==m)
        {
            cnt++;
            a.pb(i);
        }
    }
    cout<<cnt<<nl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<nl;
    
}
int main()
{
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}