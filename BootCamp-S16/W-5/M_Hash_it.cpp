/**
 *   Author : iman321
 *   Created: 2024-02-18 23:33:22
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

int p;
string HashMap[101];

void EmptyMap()
{
    p = 0;
    for (int i = 0; i < 101; i++)
    {
        HashMap[i] = "";
    }
}
int Hash(string s)
{
    //cout<<s<<nl;
    int key = 0, len = s.size();
    for (int i = 0; i < len; i++)
    {
        key += (s[i] * (i + 1));
    }
    //cout<<"Hash --"<<key<<nl;
    return (key * 19) % 101;
}
void insert(string s)
{
    int key = Hash(s);
    //cout<<"insert --"<<key<<nl;
    int position;
    bool f = true;

    for (int i = 0; i < 20; i++)
    {
        position = (key + i * i + 23 * i) % 101;
        if (HashMap[position] == s)
        {
            f = false;
            break;
        }
    }
    //cout<<f<<nl;
    if (f)
    {
        for (int i = 0; i < 20; i++)
        {
            position = (key + i * i + 23 * i) % 101;

            if (HashMap[position].size() == 0)
            {
                HashMap[position] = s;
                p++;
                break;
            }
        }
    }
}

void Delete(string s)
{
    int key = Hash(s);
    int position;

    for (int i = 0; i < 20; i++)
    {
        position = (key + i * i + 23 * i) % 101;

        if (HashMap[position] == s)
        {
            HashMap[position] = "";
            p--;
            break;
        }
    }
}

void print()
{
    cout<<p<<nl;
    
    for(int i=0;i<101;i++)
    {
        if(HashMap[i].size()!=0)
        {
            cout<<i<<":"<<HashMap[i]<<nl;
        }
    }
    cout<<nl;
}
void solve()
{
    int n;
    cin >> n;
    EmptyMap(); 
    while (n--)
    {
        
        char c[3],d;
        string s;
        for(int i=0;i<3;i++)
        {
            cin>>c[i];
        }
        cin>>d;
        cin>>s;
        if (c[0] =='A')
        {
           insert(s);
        }
        else
        {
            Delete(s);
        }
    }

    print();
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
