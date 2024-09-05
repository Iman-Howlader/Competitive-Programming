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
    int m;
    
    testcase
    {
        cin >> m;
        int sum=1;
        if(m==1)
        {
            sum=0;
        }
        for (int i = 2; i * i <= m; i++)
        {
            if (m % i == 0)
            {
                sum+=(i);
                if (m / i != i)
                {
                    sum+=( m / i);
                }
            }
        }
        cout<<sum<<nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
