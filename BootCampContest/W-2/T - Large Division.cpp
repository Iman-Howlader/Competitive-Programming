#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);
typedef long long int lli;
using namespace std;
int j=1;
void solve(string s,lli m)
{
    lli i=0;
    if(s[0]=='-')
    {
        i=1;
    }
    if(m<0)
    {
         m=abs(m);
    }
    lli ans=0;
    for(;i<s.size();i++)
    {
        ans=ans*10+(s[i]-'0');
        ans=ans%m;
    }
    if(ans==0) cout<<"Case "<<j<<": divisible\n";
    else cout<<"Case "<<j<<": not divisible\n";
    j++;
}
int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        lli n;
        cin>>s>>n;
        solve(s,n);
    }
}
