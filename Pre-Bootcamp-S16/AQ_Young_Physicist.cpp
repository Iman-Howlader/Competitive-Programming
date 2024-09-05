#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int a,b,c,x=0,y=0,z=0;
    while (n--)
    {
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    
}
int main()
{

    fast;
    solve();
    return 0;
}
