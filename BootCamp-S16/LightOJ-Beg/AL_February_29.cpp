/**
 *   Author : iman321
 *   Created: 2024-02-12 20:44:06
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

map<string, int> mash;
void pre()
{
    mash["January"] = 1;
    mash["February"] = 2;
    mash["March"] = 3;

    mash["April"] = 4;
    mash["May"] = 5;
    mash["June"] = 6;

    mash["July"] = 7;
    mash["August"] = 8;
    mash["September"] = 9;

    mash["October"] = 10;
    mash["November"] = 11;
    mash["December"] = 12;
}
bool is_leap(int n)
{
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        return true;
    }
    return false;
}
int cnt_leap_days(int y1, int y2)
{
    int cnt = 0;

    for (int i = y1; i <= y2; i++)
    {
        if (is_leap(i))
        {
            cnt++;
        }
    }
    return cnt;
}

void solve()
{

    string month1, month2;
    int date1, date2, year1, year2;
    char c;
    cin >> month1 >> date1 >> c >> year1;
    cin >> month2 >> date2 >> c >> year2;

    if (mash[month1] > 2)
        year1++;
    if (mash[month2] == 1 || (mash[month2] == 2 && date2 < 29))
        year2--;
    int ans = (year2 / 4 - (year1 - 1) / 4);
    int ans1 = (year2 / 400 - (year1 - 1) / 400);
    int ans2 = (year2 / 100 - (year1 - 1) / 100);
    cout << ans + ans1 - ans2 << nl;
}
int main()
{
    fast;
    // seive();

    pre();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
