#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countt=0;
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    for(int i=1;i<=str.size();i++)
    {
        if(str[i]!=str[i-1])
        countt++;
    }
    if(countt%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;

    }
}
