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
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            count++;
    }
    if (count == s.size() || (islower(s[0]) && count == s.size() - 1))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            else
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout << s << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
