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
    int n;
    testcase
    {
        cin >> n;
        bool f=true;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n - 1; i++)
        {
            if((a[i+1]-a[i])>1)
            {
                f=false;
                break;
            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
