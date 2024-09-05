#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int count,x1,x2,i;
    cin>>t;
    string s;
    while(t--)
    {
        count=0,x1=0,x2=0;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                x1=i;
                break;
            }
        }
        for(i=s.size(); i>=x1; i--)
        {
            if(s[i]=='1')
            {
                x2=i;
                break;
            }
        }
        for(i=x1; i<x2; i++)
        {
            if(s[i]=='0')
                count++;
        }
        cout<<count<<"\n";
    }
}
