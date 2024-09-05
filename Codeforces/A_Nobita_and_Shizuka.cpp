#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n, count, a = 1;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                count++;
        }
        cout << "Case " << a << ": " << count - 1 << nl;
        a++;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
