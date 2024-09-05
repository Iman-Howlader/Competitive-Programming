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
    string s, s1 = "heidi";
    cin >> s;
    int x=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==s1[x])
        {
            x++;
        }
        
    }
    if(x==s1.size())
    cout << "YES\n";
    else cout<<"NO\n";
}
int main()
{

    fast;
    solve();
    return 0;
}
