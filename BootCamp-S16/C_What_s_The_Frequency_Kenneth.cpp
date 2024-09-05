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
    while (getline(cin, s))
    {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
                mp[s[i]]++;
        }
        int max = 0;
        for (auto it : mp)
        {
            if (max < it.second)
                max = it.second;
        }

        for (auto it : mp)
        {
            if (max == it.second)
                cout << it.first;
        }
        cout << " " << max << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
