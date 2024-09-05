/**
 *   Author : iman321
 *   Created: 2024-03-12 10:46:43
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]<=k)
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
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