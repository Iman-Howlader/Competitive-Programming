#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int t1=0;
        cin>>s;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='-')
            {
                t1+=2;
                if(s[i-1]=='^'||s[i+1]=='^')
                    t1-=2;
            }
        }
        cout<<t1<<endl;
    }
}
