#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define testcase int t;cin>>t;while(t--)
using namespace std;
int main()
{
    fast;
    int x,y,a,b;

    testcase
    {
        cin>>x>>y;
        a=(x+y)/2;
        b=x-a;
        if(x<y || a+b!=x)
            cout<<"impossible\n";
        else
        {
            cout<<a<<" "<<b<<nl;
        }
    }
}

