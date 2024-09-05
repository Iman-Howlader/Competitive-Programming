#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,low=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            up++;
        else if(str[i]>='a' && str[i]<='z')
        low++;
    }
    for(int i=0;i<str.size();i++)
    {
        if(up>low)
        {
            str[i]=toupper(str[i]);
        }
       else if(up<low)
        {
           str[i]=tolower(str[i]);
        }
       else if(up==low)
        {
           str[i]=tolower(str[i]);
        }

    }
    cout<<str;

}
