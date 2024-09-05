#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i;
    cin>>n;
    for(i=1;;i++)
    {
        ans+=i;
        if(ans>=n)
            break;
    }
    cout<<i;
}
