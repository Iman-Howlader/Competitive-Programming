#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl "\n"

void solve()
{
    int t,n,ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n+1];
        ans=0;
        for (int i = 1; i <n; i++)
        {
            cin>>a[i];
        }
        for (int i = 2; i <=n; i++)
        {
            if(a[i]==i || a[i-1]==i-1)
            {
                ans++;
                swap(a[i],a[i-1]);
            }
        }
        cout<<ans<<nl;
    }

}
int main ()
{

    fast;
    solve();
    return 0;

}
