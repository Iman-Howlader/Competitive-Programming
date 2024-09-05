/**
 *   Author : iman321
 *   Created: 2024-02-15 19:32:03
 **/
#include <bits/stdc++.h>
using namespace std;
#define    fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define    nl                    '\n'
#define    ll                     long long
#define    all(x)                 x.begin(), x.end()
#define    prec(n)                fixed << setprecision(n)
#define    yes                    cout << "YES\n";
#define    no                     cout << "NO\n";
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
    double v1,v2,v3,a1,a2;

    double t1,t2,t,d;
    cin>>v1>>v2>>v3>>a1>>a2;

    t1= (v1/a1);
    t2= v2/a2;

    t=max(t1,t2);

    double s1= v1*t1 - (0.5*a1*t1*t1); // s= ut-0.5*a*t^2;
    double s2= v2*t2 - (0.5*a2*t2*t2); 

    d= s1+s2;

    double bird =v3*t;

    cout<<prec(10)<<d<<" "<<bird<<nl;
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        cout<<"Case "<<z<<": ";
        solve();
    }
}
