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
    vector<char> a;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
            a.push_back(s[i]);
    }
    sort(a.begin(), a.end());
    int j=0;
    for (int i = 0; i < s.size(); i++)
    {
        
        if (isdigit(s[i]))
        {
            s[i] =a[j];
            j++;
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
