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
    int n;
    string s,t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> a;
        t="#";
        for (int j = i + 1; j < n; j++)
        {
            if (n % j == 0 && j <10)
            {
                a.push_back(j);
            }
        }
        t=to_string(*min_element(a.begin(),a.end()));
        if(t =='#')
        s+="-";
        else s+=t;
    }
    cout<<s<<nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
