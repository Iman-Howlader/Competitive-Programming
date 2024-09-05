/**
 *   Author : iman320
 *   Created: 2024-01-10 18:20:36
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

string to_binary_string(int &num)
{
    string tmp="";
    int x;
    while (num!=0)
    {
        x=num%2;
        tmp+= to_string(x);
        num/=2;
    }
    if(tmp.size()<8)
    {
        int n=8-tmp.size();
        for(int i=0;i<n;i++)
        {
            tmp.push_back('0');
        }
    }
    reverse(tmp.begin(),tmp.end());
    return tmp;
}
void solve()
{
    string s,s2;
    cin>>s>>s2;
    int tmp=0;
    string tmp2="";
    string ans="";
    //cout<<s<<nl;
    int n=s.size();
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='.')
        {
             tmp=stoi(tmp2);
             //cout<<tmp<<nl;
             tmp2="";
            ans+=to_binary_string(tmp);
            
             ans.push_back('.');
            //cout<<ans<<nl;
        }
        else
        {
            tmp2+=s[i];
        }
    }
    tmp=stoi(tmp2);
    ans+=to_binary_string(tmp);
    if(ans==s2)
    {
        cout<<"Yes"<<nl;
    }
    else
    {
        cout<<"No"<<nl;
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
        cout<<"Case "<<z<<": ";
        solve();
    }
}
