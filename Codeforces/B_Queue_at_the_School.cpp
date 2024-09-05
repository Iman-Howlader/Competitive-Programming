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
    int n,a;
    string s;
    cin>>n>>a;
    cin>>s;
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j <s.size()-1;)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j+=2;
            }
            else
            { 
                j++;
            }
        }
        
    }
    cout<<s<<nl;
    

}
int main()
{
    fast;
    //test
    {
        solve();
    }
    return 0;
}
