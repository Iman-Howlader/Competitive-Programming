#include<bits/stdc++.h>
#define optimize ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    optimize
    int a,b,c,x,k,ans;
    cin>>a>>b>>c>>k;
    if(a>b && a>c)
    {
        x=a;
        a=0;
    }
    else if(b>a && b>c)
    {
        x=b;
        b=0;
    }
    else{
        x=c;
        c=0;
    }
    x=x*2*k;
    ans=a+b+c+x;
    cout<<ans<<"\n";



}

