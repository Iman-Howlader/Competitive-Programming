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
    int a,b,cnt=0;
    cin>>a>>b;
    int x=__gcd(a,b);
    for (size_t i = 1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(x/i==i)
            cnt++;
            else cnt+=2;
        }
    }
    cout<<cnt<<nl;
    

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
