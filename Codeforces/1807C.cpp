#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
                cout<<"NO\n";
        }
    }




}

