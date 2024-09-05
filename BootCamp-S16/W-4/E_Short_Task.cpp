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
const int n = 1e7 + 1;
int SOD[n] = {0};
int SOD_Index[n+1]={0};
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            SOD[j] += i;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(SOD[i]<=n)
        {
            if(SOD_Index[SOD[i]]==0)
            {
                SOD_Index[SOD[i]]=i;
            }
        }
    }
}

int main()
{
    fast;
    int x;
    solve();
    test
    {
        cin >> x;
        if(SOD_Index[x])
        cout<<SOD_Index[x]<<nl;
        else
        cout<<-1<<nl;
    }
    return 0;
}
