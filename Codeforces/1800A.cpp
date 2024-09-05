#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    string com="MEOW";
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        string ans="";
        for(int i=0; i<s.size(); i++)
        {

            if(ans.back()!=s[i])
                ans.push_back(s[i]);

        }
        if(ans==com)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
