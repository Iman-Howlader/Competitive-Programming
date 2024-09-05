/**
 *   Author : iman321
 *   Created: 2024-03-08 20:12:49
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        mp[x%3]++;
    }

    if(sum%3==0)
    {
        cout<<0<<"\n";
    }
    else if((sum%3==2)|| (sum%3==1 && mp[1]))
    {
        cout<<1<<"\n";
    }
    else
    {
        cout<<2<<endl;
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