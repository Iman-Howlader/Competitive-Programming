#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, z, tmp;
    cin >> x>>y>>z;

    long long ans = 0;
    tmp = min({x, y, z});
    ans += tmp;
    x -= tmp;
    y -= tmp;
    z -= tmp;
    if(x/2<=z)
    {
        ans+=x/2;
    }
    else
    {
        ans+=z;
    }
    cout<<ans<<endl;
}