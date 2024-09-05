/**
 *   Author : iman321
 *   Created: 2024-03-28 20:45:40
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && c>b)
    {
        cout<<"STAIR\n";
    }
    else if (a<b && b>c)
    {
        cout<<"PEAK\n";
    }
    else
    {
        cout<<"NONE\n";
    }
    
           
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