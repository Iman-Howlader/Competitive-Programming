/**
 *   Author : iman321
 *   Created: 2024-02-22 18:18:26
 **/
#include<iostream>
#include<vector>
#include<algorithm>
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

const int MxN = 1000;
vector<int> a(MxN);
int char_to_int(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 10; // c-'A' =0 && +10 means its value 10;
    }
    else if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 36;
    }

    return c - '0';
}

char int_to_char(int x)
{
    if (x >= 36)
    {
        return x + 'a' - 36;
    }
    else if (x >= 10)
    {
        return x + 'A' - 10;
    }

    return x + '0';
}
void solve()
{
    int n, m;
    string input;
    cin >> n >> m >> input;
    a.clear();

    //cout << n << " " << input << nl;
    //cout << m << nl;
    for (int i = 0; i < input.size(); i++)
    {
        a[i] = char_to_int(input[i]);
    }
    string ans = "";
    bool flag = true;

    int tmp;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < input.size(); i++)
        {
            tmp = a[i] % m;
            a[i] /= m;

            if (a[i] != 0)
            {
                flag = true;
            }
            if (i != input.size() - 1)
            {
                a[i + 1] += (n * tmp);
            }
            else
            {
                ans += int_to_char(tmp);
            }
        }
    }

    reverse(all(ans));
    //cout <<m<<" "<< ans << nl<<nl;

    cout<<ans<<nl;
    // out(a);
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    //cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
