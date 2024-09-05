#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long

/*********************************Code Start From Here************************************/
void solve()
{
    int B,y,tmp,x;
    cin>>B>>y;
    if(B<y)
    {
        cout<<1<<nl;
        return;
    }
    for (size_t i = 1;; i++)
    {
        tmp=2*i+i*i+i*i;
        if(tmp==B)
        {
            x=i;
            break;
        }
        else if(tmp>B)
        {
            x=i-1;
            break;
        }
    }
    cout<<2*pow(2,x)<<nl;
    
}
int main()
{
    fast;
    // seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
