#include<bits/stdc++.h>
using namespace std;
void solve(string s,int m)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans=ans*10+(s[i]-'0');
        ans=ans%m;
    }
    cout<<ans<<endl;
    if(ans%m==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>s>>n;
        solve(s,n);
    }
}
