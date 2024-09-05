/**
 *   Author : iman320
 *   Created: 2023-12-31 22:29:09
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

double arr[10][4];
void happy_new_year(double a, double b, int p)
{
    bool f = false;
    for (int i = 0; i <10; i++)
    {
        if ((arr[i][0] < a && a< arr[i][2]) && (arr[i][1]>b && arr[i][3]< b))
        {
            cout << "Point " << p << " is contained in figure " << i + 1 << nl;
            f = true;
        }
    }
    if (!f)
        cout << "Point " << p << " is not contained in any figure" << nl;
}
void solve()
{
    char ch;
    int i = 0;
    while (cin >> ch)
    {
        if (ch == '*')
            break;
        else
        {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
        }
        i++;
    }
    double a, b;
    int p = 0;
    while (true)
    {
        cin >> a >> b;
        if (a == 9999.9 && b == 9999.9)
            break;
        p++;
        happy_new_year(a, b, p);
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    // cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
