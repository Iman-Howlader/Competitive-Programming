/**
 *   Author : iman320
 *   Created: 2023-12-28 13:43:43
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


bool isValid(int minDis,const vector<int>&vec,int Cow)
{
    int lastPos=vec.front();
    Cow--;
    for (int i = 1; i <vec.size(); i++)
    {
        int pos=vec[i];
        if(pos-lastPos>=minDis)
        {
            Cow--;
            lastPos=pos;
        }
        if(Cow==0) return true;
    }
    return false;
}
void solve()
{
    int NumberOfBurn,Cow;
    cin>>NumberOfBurn>>Cow;
    vector<int>Burn(NumberOfBurn);
    for(int i=0;i<NumberOfBurn;i++)
    {
        cin>>Burn[i];
    }
    sort(Burn.begin(),Burn.end());
    int low=1,high=Burn.back();
    int ans=-1;
    while (low<=high)
    {
        int mid=(high+low)/2;
        if(isValid(mid,Burn,Cow))
        {
            ans=mid;
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans<<nl;
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
}
