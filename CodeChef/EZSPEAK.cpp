#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                continue;
            }
            else{
                count++;
            }

        }
        cout<<count<<"\n";
        if(count>=4)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        count=0;
    }
}
