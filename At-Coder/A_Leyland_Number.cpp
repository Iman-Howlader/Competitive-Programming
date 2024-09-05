/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
void solve()
{
     long long  a,b;
     cin>>a>>b;
     long long ans=pow(a,b)+pow(b,a);
     cout<<ans<<nl;
}
int main()
{
    //fast;
    //test
    {
        solve();
    }
    return 0;
}
