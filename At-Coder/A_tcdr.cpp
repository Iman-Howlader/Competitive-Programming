#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    string s, s2;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {

        }
        else
        {
            s2.push_back(s[i]);
        }
    }
    cout<<s2<<nl;
    
}
int main()
{

    fast;
    solve();
    return 0;
}
