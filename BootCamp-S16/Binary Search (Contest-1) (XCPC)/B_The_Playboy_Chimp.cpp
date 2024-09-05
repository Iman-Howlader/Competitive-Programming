/**
 *   Author : iman320
 *   Created: 2023-12-27 18:11:28
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

int BS_lower(const vector<int>&a,int target)
{
    int low=0,high=a.size()-1;
    int ans=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<target)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
    
}

int BS_Upper(const vector<int>&a,int target)
{
    int low=0,high=a.size()-1;
    int ans=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=target)
        {
            low=mid+1;
        }
        else
        {
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
    
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        int tall=BS_Upper(a,x);
        int shortest = BS_lower(a,x);
        if(tall !=-1 && shortest!=-1)
        {
            cout<<a[shortest]<<" "<<a[tall]<<nl;
        }
        else
        {
            if(shortest==-1)
            {
                cout<<'X'<<" ";
            }
            else
            {
                cout<<a[shortest]<<" ";
            }
            if(tall==-1)
            {
                cout<<'X'<<nl;
            }
            else
            {
                cout<<a[tall]<<nl;
            }
        }
        
    }
    
    
}
int main()
{
    fast;
    // seive();
    int tc=1;
    //cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
}
