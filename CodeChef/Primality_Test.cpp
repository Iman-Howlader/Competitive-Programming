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
bool is_prime(int n)
{

    if (n == 2||n==3)
        return true;
    if (n == 1 || n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    testcase
    {
        int n;
        cin >> n;
        if (is_prime(n))
        {
            cout << "yes" << nl;
        }
        else
        {
            cout << "no\n";
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
