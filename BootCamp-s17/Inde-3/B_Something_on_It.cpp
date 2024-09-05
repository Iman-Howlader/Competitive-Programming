/**
 *   Author : iman321
 *   Created: 2024-04-06 16:27:03
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    string s;
    cin>>s;
    int cnt=count(s.begin(),s.end(),'o');
    cout<<700+cnt*100<<endl;
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