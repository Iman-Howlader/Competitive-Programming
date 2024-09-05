/**
 *   Author : iman321
 *   Created: 2024-05-09 17:57:03
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

void solve()
{
    int n, x, t;
    char c;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    map<int,int>mp;
    int flag=-1;
    while (q--)
    {
        cin >> t >> x >> c;
        if (t == 1)
        {
            s[x - 1] = c;
            mp[x-1]++;
        }
        else 
        {
            flag=t;
            mp.clear();
        }
    }
    if(flag==2)
    {
        for(int i=0;i<s.size();i++)
        {
            if(mp[i]==0 && isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        }
    }
    else if(flag==3)
    {
        for(int i=0;i<s.size();i++)
        {
            if(mp[i]==0 && islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
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