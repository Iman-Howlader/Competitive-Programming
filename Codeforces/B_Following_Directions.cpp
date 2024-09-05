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
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int x = 0, y = 0;
        bool flag=false;
        for (int i = 0; i <s.size(); i++)
        {
            if (s[i] == 'R')
                x++;
            else if (s[i] == 'L')
            {
                x--;
            }
            else if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
            {
                y--;
            }

            if(x==1 && y==1)
            {
                cout<<"YES\n";
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<"NO\n";
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
