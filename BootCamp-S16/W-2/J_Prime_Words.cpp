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
            return false;
    }
    return true;
}
void solve()
{

    string s;
    while (cin >> s)
    {
        int n = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                n += (s[i] - 38);
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                n += (s[i] - 96);
            }
        }
        if (is_prime(n))
            cout << "It is a prime word." << nl;
        else
            cout << "It is not a prime word." << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
