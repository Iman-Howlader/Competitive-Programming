/**
 *   Author : iman320
 *   Created: 2023-11-20 17:59:04
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
#define loop(x, v, n) for (int x = v; x < n; x++)
#define rloop(x, v, n) for (int x = n - 1; x >= v; x--)
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
/*
    Problem Link:
    Solution Idea:
*/
/*********************************Code Start From Here************************************/

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << "NO"<<nl;
    }
    else if (n == 1)
    {
        cout << "YES" << nl;
        cout << n << nl;
    }
    else
    {
        if (n % 2 == 0)
        {
            if (2 * k <= n)
            {
                cout << "YES" << nl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - (2 * (k - 1)) << nl;
            }
            else if (k % 2 == 0)
            {
                cout << "YES" << nl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n - (k - 1) << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
        else
        {
            if(k%2==1)
            {
                cout<<"YES"<<nl;
                for(int i=0;i<(k-1);i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<nl;
            }
            else 
            {
                cout<<"NO"<<nl;
            }
        }
    }
}
int main()
{
    fast;
    // seive();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
