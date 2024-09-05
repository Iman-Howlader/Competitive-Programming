/**
*   Author : iman320
*   Created: 2023-12-18 20:37:14
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
#define    css                    cout<<"Case "<<cs++<<": "
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
int cs=1;
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
    string s;

    cin>>s;
    string a,b;
    int ind;
    a+=s[0];
    for (size_t i = 1; i <s.size(); i++)
    {
        if(s[i]=='0')
        {
            a+=s[i];
        }
        else
        {
            ind=i;
            break;
        }
    }
    for(int i=ind;i<s.size();i++)
    {
        b+=s[i];
    }
    int x=stoi(a);
    int y=stoi(b);
    if(x>=y)
    {
        cout<<-1<<nl;
        return;
    }
    cout<<x<<" "<<y<<nl;
    
    
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
