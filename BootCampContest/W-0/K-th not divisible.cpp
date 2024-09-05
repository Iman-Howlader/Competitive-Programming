#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        ans=k+(k-1)/(x-1);
        cout<<ans<<endl;

    }
}
