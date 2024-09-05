/**
 *   Author : iman321
 *   Created: 2024-02-13 12:00:34
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
    double A,B,C;
    cin>>A>>B>>C;

    double AB = A+B;
    double BC =B+C;
    double AC =A+C; 

    double S= (AB+AC+BC)/2; 
    double Triangle_Area = sqrt(S*(S-AB)*(S-AC)*(S-BC));

    //cout<<Triangle_Area<<nl;
    
    double Angle_A= acos((AB*AB+AC*AC-BC*BC)/(2*AB*AC));
    double Angle_B= acos((AB*AB+BC*BC-AC*AC)/(2*AB*BC));
    double Angle_C= acos((BC*BC+AC*AC-AB*AB)/(2*BC*AC));
   // cout<<Angle_A<<" "<<Angle_B<<" "<<Angle_C<<nl;

    double sect_A = (Angle_A*A*A)/2;
    double sect_B = (Angle_B*B*B)/2;
    double sect_C = (Angle_C*C*C)/2;

    double total_sect_area =sect_A + sect_B +sect_C;

    cout<<prec(9)<<(Triangle_Area-total_sect_area)<<nl;
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
