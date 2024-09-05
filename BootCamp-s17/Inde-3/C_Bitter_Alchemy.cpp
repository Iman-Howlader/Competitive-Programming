/**
 *   Author : iman321
 *   Created: 2024-04-06 16:34:43
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int n,m,sum=0;
    cin>>n>>m;
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mn=min(mn,x);
        sum+=x;
    }
    cout<<n+(m-sum)/mn;
           
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        //cout<<"Case "<<tc<<" ";
        solve();
    }
}