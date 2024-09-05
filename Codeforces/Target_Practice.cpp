/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int> vect
#define pb(x) push_back(x)
#define inp(n, vect)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vect.push_back(x);      \
    }

#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

void solve()
{
    int x = 0;
    char a[11][11];
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            cin >> a[i][j];
        }
    }
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (a[i][j] == 'X' && (i == 0 || i == 9 || j==0 ||j==9))
            {
                x += 1;
            }
            else if (a[i][j] == 'X' && (i == 1 || i == 8 || j==1 ||j==8) )
            {
                x += 2;
            }
            else if (a[i][j] == 'X' && (i == 2 || i == 7 || j==2 ||j==7))
            {
                x += 3;
            }
            else if (a[i][j] == 'X' && (i == 3 || i == 6 || j==3 ||j==6))
            {
                x += 4;
            }
            else if (a[i][j] == 'X' && (i == 4 || i == 5 || j==4 ||j==5))
            {
                x += 5;
            }
        }
    }
    cout << x << nl;
}
int main()
{
    fast;
    test
    {
        solve();
    }
    return 0;
}
