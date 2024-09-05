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
}
int main()
{

    fast;

    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        int x = n;
        vector<int> a;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {

                a.push_back(i);
                x /= i;
            }
            if (a.size() == 2)
            {
                a.push_back(x);
                break;
            }
        }

        if (a.size() == 3 && a[0] != a[1] && a[0] != a[2] && a[2] != a[1])
        {
            cout << "YES\n";
            cout << a[0] << " " << a[1] << " " << a[2] << nl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}
