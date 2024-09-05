#include <bits/stdc++.h>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve()
{
    int n,m,ans;
    cin>>n;
    while (n--)
    {
        cin>>m;
        ans=(m*(m+1))/2;
        cout<<ans<<endl;

    }

}
int main ()
{

    fast;
    solve();
    return 0;

}
