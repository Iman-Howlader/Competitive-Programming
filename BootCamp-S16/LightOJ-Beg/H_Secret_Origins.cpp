/**
 *   Author : iman320
 *   Created: 2024-01-09 11:49:20
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

int cnt_binary(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            cnt++;
        }
        n /= 2;
    }
    return cnt;
}

string dec_to_bin(int n)
{
    string s="";
    while (n!=0)
    {
        s+=to_string(n%2);
        n/=2;
        //cout<<n<<nl;
    }
    s.push_back('0');
    reverse(all(s));
    //cout<<s<<nl;
    return s;
}

int bin_to_dec(string s)
{
    int sum=0;
    int n=s.size();
    int power=n-1;
    for(int i=0;i<n;i++)
    {
       int tmp=pow(2,power);
       tmp*= (s[i]-'0');
       sum+=tmp;
       //cout<<tmp<<" "<<sum<<" "<<power<<nl;
       power--;
       
    }
    //cout<<sum<<nl;
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    

    string tmp =dec_to_bin(n);
    //tmp.push_back('0');
    next_permutation(all(tmp));
    //cout<<tmp<<nl;
    int ans= bin_to_dec(tmp);
    cout<<ans<<nl;
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
