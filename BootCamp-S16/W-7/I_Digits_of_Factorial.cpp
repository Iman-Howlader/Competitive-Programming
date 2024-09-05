/**
 *   Author : iman321
 *   Created: 2024-02-12 00:25:02
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
#define eps 1e-9;
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

const int N=1e6+7;
double factoraldigit[N];
void precalculate()
{

    factoraldigit[0]=0;
    for (int i = 1; i <=N; i++)
    {
        factoraldigit[i]=factoraldigit[i-1]+log10(i);
    }
    

}
void solve()
{
    int n, base;
    cin >> n >> base;
    /*

    We know ,
    number of digit in log base 10--- log10(n)+1;
    In factoral
    ----log10(n!)===>log(1*2*--*n)
    ==> log10(1)+log10(2)+log10(n-1)+log10(n) +1
    ==>(in simply we can use for loop for this part)

    for diffent base otherthan 10 or 2
    we can use ------logB(x)=logC(x)/logC(B)    formulaa

    Tutorial From : https://forthright48.com/number-of-digits-of-factorial/
    */
    
    int ans= factoraldigit[n]/log10(base) +1;
    cout<<ans<<nl;
}
int main()
{
    fast;
    // seive();

    precalculate();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
