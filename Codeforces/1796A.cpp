#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='F'||s[i]=='B')
            {
                s[i]='A';
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='A')
            {
                flag=false;
            }
        }
        cout<<s<<endl;

        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

