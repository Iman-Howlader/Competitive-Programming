/**
 *   Author : iman321
 *   Created: 2024-04-06 16:02:04
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int n;
    cin>>n;
    string ans="";
    for(int i=9;i>=1;i--)     
    {
        if(n>=i)
        {
            ans=to_string(i)+ans;
            n-=i;
        }
    }
    cout<<ans<<endl; 
}
int main()
{
    fast;
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        //cout<<"Case "<<tc<<" ";
        solve();
    }
}