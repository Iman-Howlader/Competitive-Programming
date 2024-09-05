/**
 *   Author : iman320
 *   Created: 2023-12-25 17:03:29
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
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
//----------------------------------------seive algorithm------------------------//
// const ll N = 2e7 + 7;
// bool S[N + 1];
// vector<ll> primes;
// void seive()
// {
//     S[0] = S[1] = true;
//     for (ll i = 2; (ll)i * i <= N; i++)
//     {
//         if (S[i] == false)
//         {
//             for (size_t j = i * i; j <= N; j += i)
//             {
//                 S[j] = true;
//             }
//         }
//     }
//     for (size_t i = 2; i <= N; i++)
//     {
//         if (!S[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }
void solve()
{
    string type, url;
    stack<string> backward, forward;
    backward.push("http://www.lightoj.com/");
    while (true)
    {

        cin >> type;
        if (type == "VISIT")
        {
            cin >> url;
            backward.push(url);
            cout << backward.top() << nl;
            forward = stack<string>();
        }
        else if (type == "BACK")
        {
            if (backward.size()>1)
            {
                forward.push(backward.top());
                backward.pop();
                cout << backward.top() << nl;
            }
            else
            {
                cout << "Ignored" << nl;
            }
        }
        else if (type == "FORWARD")
        {
            if (!forward.empty())
            {
                backward.push(forward.top());
                forward.pop();
                cout << backward.top() << nl;
            }
            else
            {
                cout << "Ignored" << nl;
            }
        }
        else
        {
            return;
        }
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ":" << nl;
        solve();
    }
}
