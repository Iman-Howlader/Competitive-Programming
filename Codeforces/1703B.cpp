#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,count;
    string s;
    cin>>n;

    while(n--)
    {
        count=0;
        cin>>t>>s;
        sort(s.begin(),s.end());
        count=s.size()*2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            count--;
        }
        cout<<count<<"\n";
    }

}
