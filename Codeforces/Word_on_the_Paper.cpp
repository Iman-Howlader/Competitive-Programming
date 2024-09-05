/*-----------------------------------------------------
|  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ                           |
|  Iman Howlader                                      |
|  Hello!! Welcome to my code !!                      |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long
#define ve                     vector<int>
#define pb(x)                  push_back(x)
#define pp                     pop_back()
#define all(x)                 x.begin(), x.end()
#define gcd(a, b)              __gcd(a, b)
#define prec(n)                fixed << setprecision(n)
#define yes                    cout << "YES\n";
#define no                     cout << "NO\n";
#define cs       \
    int css = 1; \
    cout << "Case " << css++;
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

// const int N = 2e7;
// bool S[N + 1] = {0};
// void seive()
// {
//     S[0] = S[1] = true;
//     for (size_t i = 2; (ll)i * i <= N; i++)
//     {
//         if (S[i] == false)
//         {
//             for (size_t j = i * i; j <= N; j += i)
//             {
//                 S[j] = true;
//             }
//         }
//     }
// }

bool flg=false;
/*********************************Code Start From Here************************************/
void solve()
{
    char arr[8][8];
    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j <8; j++)
        {
                cin>>arr[i][j];
                if(arr[i][j]!='.')
                {
                        cout<<arr[i][j];
                }
        }
    }
    cout<<nl;
    
}
int main()
{
    fast;
    // seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
