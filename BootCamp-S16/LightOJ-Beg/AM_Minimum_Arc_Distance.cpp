/**
 *   Author : iman321
 *   Created: 2024-02-12 17:36:21
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
    int Ox, Oy, Ax, Ay, Bx, By;
    cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;

    /*
    We know the length of a straitline of two point

    d= sqrt((x2-x1)^2 +(y2-y1)^2)
    */
    double AB = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    double OA = sqrt(pow((Ax - Ox), 2) + pow((Ay - Oy), 2));
    double OB = sqrt(pow((Bx - Ox), 2) + pow((By - Oy), 2));

    /*
    From the law of cosine :

    cos(theta) = (a^2+b^2-c^2)/2*a*b
    --> theta = cos^-1(a^2+b^2-c^2)/2*a*b )

    then finally arc lenth = d*theta

    Resource from: 
    https://math.stackexchange.com/questions/830413/calculating-the-arc-length-of-a-circle-segment
    */


    // cout << AB << " " << OA << " " << OB << nl;

    double tmp = ((OA * OA + OB * OB - AB * AB) / (2 * OB * OA));

    // cout<<tmp<<nl;
    double theta = acos(tmp);
    cout << prec(5) << theta * OA << nl;
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
