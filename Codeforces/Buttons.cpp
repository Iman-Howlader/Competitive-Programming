#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int t;
    long long int a, b, c;
    cin>>t;
    while (t--)
    {
        cin >> a >> b >> c;
        int x=ceil(c/2.0);
        int y=c-x;
        if ((a+x) > (y+b))
        {
            cout << "First\n";
        }
        else
            cout << "Second\n";
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
