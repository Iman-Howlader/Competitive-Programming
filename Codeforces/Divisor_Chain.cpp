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
    testcase
    {
        int n;
        vector<int> a;
        cin >> n;
        if (n % 2 == 0)
        {
            a.push_back(n);
            n = n - 2;
            a.push_back(n);
        }
        else
        {
            a.push_back(n);
            n = n - 1;
            a.push_back(n);
        }
        while (n != 1)
        {
            n = ceil(n / 2.0);
            a.push_back(n);
        }
        cout<<a.size()<<nl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout<<nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
