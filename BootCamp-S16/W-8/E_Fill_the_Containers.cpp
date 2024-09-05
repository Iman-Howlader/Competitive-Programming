/**
 *   Author : iman320
 *   Created: 2023-12-10 12:27:16
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

const int MAX = 1010;
vector<int> a(MAX);
int n, m;

bool check(int candidate_ans)
{
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > candidate_ans)
        {
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= m;
}
int binary_search(int mxCap, int total)
{
    int low = mxCap, high = total, ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
void solve()
{
    
    while (cin >> n >> m)
    {
        int total = 0, mxCap = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mxCap = max(mxCap, a[i]);
            total += a[i];
        }
        cout << binary_search(mxCap, total) << nl;
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
     //cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        //cout<<"Case "<<i<<": ";
        solve();
    }
}
