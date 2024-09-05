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
        vector<int> a(n), b, c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        c.push_back(a[n-1]);

        for(int i=n-2; i>=0; i--)
        {
            if(a[i]==c[c.size()-1])
            {
                c.push_back(a[i]);
            }
            else
                b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        if(b.size()>=1 && c.size()>=1)
        {
            cout<<b.size()<<" "<<c.size()<<nl;
            for(int i=0; i<b.size(); i++)
                cout<<b[i]<<" ";
            cout<<nl;
            for(int i=0; i<c.size(); i++)
                cout<<c[i]<<" ";
            cout<<nl;
        }
        else
            cout<<"-1\n";
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
