#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int>
#define pb(x) push_back(x)
#define pp pop_back()
#define all(x) x.begin(), x.end()
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);       \
    }
#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
template <typename T>
T lcm(T a, T b)
{
    return a / gcd(a, b) * b;
}
int cs = 1;
/*const int N = 2e7;
bool S[N + 1] = {0};
void seive()
{
    S[0] = S[1] = true;
    for (ll i = 2; (ll)i * i <= N; i++)
    {
        if (S[i] == false)
        {
            for (size_t j = i * i; j <= N; j += i)
            {
                S[j] = true;
            }
        }
    }
}
/*********************************Code Start From Here************************************/
void solve()
{
    int cnt = 0;
    bool flag = true;
    vector<int> a;
    inp(3, a);
    int mn = *min_element(a.begin(), a.end());
    if(a[0] % mn != 0 || a[1] % mn != 0 || a[2] % mn != 0)
    {
        flag=false;
    }
    for (long long x : a)
    {
        while (x != mn)
        {
            if (cnt > 3 || x % mn != 0)
            {
                flag = false;
                break;
            }
            x -= mn;
            cnt++;
        }
    }
    if(cnt>3)
    {
        flag=false;
    }
    if(flag )
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    fast;
    // seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
