#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag,x,y;;
    string s;
    cin>>t;
    while(t--)
    {
        flag=0;
        x=0;
        y=0;
        cin>>n;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='U')
                x++;
            else if(s[i]=='D')
                x--;
            else if(s[i]=='R')
                y++;
            else if(s[i]=='L')
                y--;
            if(x==1 && y==1)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"NO\n";
    }
}
