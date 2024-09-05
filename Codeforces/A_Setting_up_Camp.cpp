/**
 *   Author : iman321
 *   Created: 2024-03-23 11:57:26
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    ans+=a;
    ans+=(b/3);
    b%=3;

    if(b==0)
    {
        ans+=(c/3)+(c%3);
    }
    else
    {
        
    }
    
    ans+= (b%3)

           
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