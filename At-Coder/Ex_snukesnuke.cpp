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
    cin >> t;
    string s;
    vector<int> a(4);
    while (t--)
    {
        cin >> s;
        if (a.size() == 0)
        {
            a.push_back(s.size());
        }
        sort(a.begin(), a.end());
        
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
