/**
 *   Author : iman320
 *   Created: 2023-11-13 12:13:51
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
T lcm(T a, T b)
{
    return a / gcd(a, b) * b;
}
int cs = 1;

//----------------------------------------seive algorithm------------------------//
const ll N = 2e7 + 7;
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
}
/*
    Problem Link:
    Solution Idea:
*/
/*********************************Code Start From Here************************************/

void solve()
{
    int n, m, x;
    string s;
    cin >> n >> m;
    deque<int> dq;
    css;
    cout << nl;
    while (m--)
    {
        cin >> s;
        if (s == "pushLeft" || s == "pushRight")
        {
            cin >> x;
            if(dq.size()==n)
            {
                cout<<"The queue is full"<<nl;
            }
            else if (s == "pushLeft")
            {
                dq.push_front(x);
                cout<<"Pushed in left: "<<dq.front()<<nl;
            }
            else if (s == "pushRight")
            {
                dq.push_back(x);
                cout<<"Pushed in right: "<<dq.back()<<nl;
            }
        }
        else
        {
            if(dq.empty())
            {
                cout<<"The queue is empty"<<nl;
            }
            else if(s=="popLeft")
            {
                cout<<"Popped from left: "<<dq.front()<<nl;
                dq.pop_front();
            }
            else
            {
                cout<<"Popped from right: "<<dq.back()<<nl;
                dq.pop_back();
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
