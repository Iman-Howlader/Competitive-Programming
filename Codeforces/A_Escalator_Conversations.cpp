#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"
#define ll long long int
void solve()
{
    ll t, n, m, k, H;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k >> H;
        int count = 0,temp=H;
        vector<ll> a(n+1);
        vector<ll>b(n+1);

        for (size_t i = 1; i < n+1; i++)
        {
            cin >> a[i];
            b.push_back(a[i]);
        }
        for (size_t i = 1; i < n+1; i++)
        { 
            temp=H;

            if (H > a[i])
            {
                a[i] += m * (k - (i-1));
                temp += m * i;
            }
            else
            {
                temp += m * (k -(i-1));
                a[i] += m * i;
            }
            if (temp == a[i])
            {
                count++;
            }

        }
        cout << count << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
