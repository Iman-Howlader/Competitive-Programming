#include <bits/stdc++.h>
using namespace std;
#define fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long
#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);       \
    }
int cs=1;

int last(vector<ll>arr, int sz, int a, int b) {
    int cnt = 0;
    int i = 0, low = sz-1, high = sz-1;
    while (i < high) {
         low = max(i, low);
         while (low > i && arr[i] + arr[low] >= a) --low;
        while (high > low && arr[i] + arr[high] > b) --high; 
        cnt += (high-low);
        ++i;
    }
    return cnt;
}
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>vec;
    inp(n,vec);
    sort(vec.begin(),vec.end());
     int cnt=last(vec,n,a,b);
     cout<<"Case "<<cs++<<": "<<cnt<<nl;
     
}
int main()
{
    fast;
    // seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
