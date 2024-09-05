#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,s2,m="Emon";
    cin>>n;
    while(n--)
    {

        cin>>s>>s2;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]!=s2[i])
            {
                m[i]='B';
            }
            else
            {
                m[i]='G';
            }
        }
        cout<<m<<endl;
    }
}
