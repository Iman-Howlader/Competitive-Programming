#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define nl "\n"

void solve()
{
    int n,x,y;
    string name;
    cin >> n;
    map<string,int>mp;
    while (n--)
    {
        cin>>x>>name;
        if(x==1)
        {
            cin>>y;
            mp[name]+=y;
        }
        else if (x==2)
        {
            mp.erase(name);
        }
        else if(x==3)
        {
            cout<<mp[name]<<nl;
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
