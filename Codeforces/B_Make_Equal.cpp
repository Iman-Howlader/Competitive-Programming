/**
 *   Author : iman321
 *   Created: 2024-02-13 21:25:42
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
    int n;
    cin >> n;
    int sum = 0, prev = INT_MAX;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int tmp;
    if (sum % n == 0)
    {
        tmp = (sum / n);
    }
    else
    {
        cout << "NO" << nl;
        return;
    }

    int tmp2 = 0;
    // cout<<"tmp----"<<tmp<<nl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == tmp)
        {
            continue;
        }
        else if (a[i] < tmp && tmp2 == 0)
        {
            cout << "NO" << nl;
            return;
        }
        else if (a[i] < tmp)
        {
            tmp2 -= (tmp - a[i]);
            if (tmp2 < 0)
            {
                cout << "NO" << nl;
                return;
            }
            a[i] = tmp;
        }
        else
        {
            tmp2 += (a[i] - tmp);
            a[i] = tmp;
        }
        // cout << i << " " << a[i] << " " << tmp2 << nl;
    }

    bool flag = true;
    // out(a);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
