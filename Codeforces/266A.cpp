#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,countt=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<=str.size();i++)
    {
        if(str[i]==str[i-1])
        countt++;
    }
    cout<<countt;
}

