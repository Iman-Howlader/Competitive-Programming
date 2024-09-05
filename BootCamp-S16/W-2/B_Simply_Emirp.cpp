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
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
void solve()
{
    int m;

    while (cin >> m)
    {

        if (m == 1)
            cout << m << " is not prime." << nl;
        else if (is_prime(m))
        {
            int rm, rv = 0, n = m;
            while (n >= 1)
            {
                rm = n % 10;
                rv = (rv * 10) + rm;
                n /= 10;
            }
            if (is_prime(rv) && m != rv)
            {
                cout << m << " is emirp." << nl;
            }
            else
                cout << m << " is prime." << nl;
        }
        else
            cout << m << " is not prime." << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
