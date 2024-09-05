/**
 *   Author : iman320
 *   Created: 2023-12-05 21:07:52
 **/
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
#define css cout << "Case " << cs++ << ": "
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
T lcm(T a, T b) { return a / gcd(a, b) * b; }
int cs = 1;

//----------------------------------------seive algorithm------------------------//
/*const ll N = 2e7 + 7;
bool S[N + 1];
vector<ll> primes;
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
    for (size_t i = 2; i <= N; i++)
    {
        if (!S[i])
        {
            primes.push_back(i);
        }
    }
}*/
/*********************************Code Start From Here************************************/
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<bool> ok(n + 1, true);
    vector<int> up, low;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            ok[i] = false;
            if (!up.empty())
            {
                ok[up.back()] = false;
                up.pop_back();
            }
        }
        else if (s[i] == 'b')
        {
            ok[i] = false;
            if (!low.empty())
            {
                ok[low.back()] = false;
                low.pop_back();
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            up.push_back(i);
        }
        else
        {
            low.push_back(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ok[i])
        {
            cout << s[i];
        }
    }
    cout << nl;
}
int main()
{
    fast;
    // seive();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
