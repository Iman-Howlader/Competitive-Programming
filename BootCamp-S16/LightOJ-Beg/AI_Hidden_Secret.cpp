/**
 *   Author : iman321
 *   Created: 2024-02-13 17:02:52
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
    string line, line2;

    getline(cin, line);
    getline(cin, line2);
    //cout << line << nl << line2 << nl;
    string new_line="",new_line2="";

    for (int i = 0; i < (int) line.size(); i++)
    {
        if(line[i]!=' ')
        {
            new_line+= tolower(line[i]);
        }
    }

     for (int i = 0; i < (int) line2.size(); i++)
    {
        if(line2[i]!=' ')
        {
            new_line2+= tolower(line2[i]);
        }
    }
    //cout << new_line << nl << new_line2 << nl;

    sort(all(new_line));
    sort(all(new_line2));

    //cout << new_line << nl << new_line2 << nl;

    cout<< ((new_line==new_line2)?"Yes" : "No")<<nl;

    
}
int main()
{
    fast;
    // seive();
    int tc = 1;

    cin >> tc;
    cin.ignore();
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
