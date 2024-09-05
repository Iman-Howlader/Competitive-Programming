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
    testcase
    {
        int n, a, x;
        double money=0;
        char ch;
        string s;
        cin >> n;
        map<char, int> mp;
        while (n--)
        {
            cin >> ch >> a;
            mp.insert({ch, a});
        }

        
        cin >> x;
        cin.ignore();
        while (x--)
        {
            getline(cin, s);
            for (int i = 0; i < s.size(); i++)
            {
                auto it=mp.find(s[i]);
                if (it!=mp.end()&& s[i] == it->first )
                {
                    money+=it->second;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<money/100<<"$"<<nl;
    }
}
    int main()
    {

        fast;
        solve();
        return 0;
    }
