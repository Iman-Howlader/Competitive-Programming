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
    string s,s2="";
    testcase
    {
        cin >> s;
        char ch;
        for (int i=0;i< s.size();i++)
        {
            if(s[i]=='1')
            {
                ch='1';
                break;
            }
            else if(s[i]=='7')
            {
                ch='7';
                break;
            }
            
        }
        if(ch=='1')
        cout<<"17"<<nl;
        else cout<<"71"<<nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
