/**
 *   Author : iman320
 *   Created: 2023-12-28 20:41:22
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

    char arr[3][3];
    int row,col;
    for (int i = 0; i <3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='?')
            {
                row=i;
                col=j;
            }
        }
    }
    vector<char>a;
    for (int i = 0; i <3; i++)
    {
        if(arr[row][i]!='?')
        a.push_back(arr[row][i]);
    }

    if(a[0]!='A' && a[1]!='A')
    {
        cout<<"A"<<nl;
    }
    else if(a[0]!='B' && a[1]!='B')
    {
        cout<<'B'<<nl;
    }
    else
    {
        cout<<'C'<<nl;
    }
    
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
}
