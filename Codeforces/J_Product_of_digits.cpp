/**
 *   Author : iman321
 *   Created: 2024-02-20 00:08:01
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

// const int mxN = 2e6 + 8;
// vector<bool> isPrime(mxN, true);
// vector<int> primes;

// void seive()
// {
//     isPrime[0] = isPrime[1] = false;
//     for (int i = 2; i * i < mxN; i++)
//     {
//         if (!isPrime[i])
//             continue;
//         for (int j = i * i; j < mxN; j += i)
//         {
//             isPrime[j] = false;
//         }
//     }
//     for (int i = 0; i < mxN; i++)
//     {
//         if (isPrime[i])
//             primes.push_back(i);
//     }
// }


void solve()
{
    ll n;
    cin >> n;

    if(n==1) cout<<1<<nl;
    else if (n==0)
    {
        cout<<0<<nl;
    }
    else
    {
        vector<int>vec;
        for (int i = 9; i>=2;i--)
        {
            while (n%i==0)
            {
                vec.push_back(i);
                n/=i;
            }
            
        }

        if(n!=1) cout<<-1<<nl;
        else
        {
            for(int i=vec.size()-1;i>=0;i--)
            {
                cout<<vec[i];
            }
            cout<<nl;
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
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
