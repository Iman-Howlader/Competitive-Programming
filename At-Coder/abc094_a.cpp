#include<bits/stdc++.h>
#define optimize ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    optimize
    int a,b,x;
    cin>>a>>b>>x;
    if(a+b<x)
        cout<<"NO\n";
    else if(a+b>=x)
    {
        if(a>x)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }


}
