/**
 *   Author : iman321
 *   Created: 2024-03-06 21:27:52
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

bool is_prime(int n)
{
    if(n==1) return false;
    for (int i = 2; i * 1ll * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int reverse_num(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans= ans*10 + (n % 10);
        n /= 10;
    }
    return ans;
}
void solve()
{
    int n;
    while (cin >> n)
    {
        int m=reverse_num(n);
        if(is_prime(n) && is_prime(m) && n != m)
        {
            cout<<n<<" is emirp.\n";
        }
        else if (is_prime(n))
        {
            cout<<n<<" is prime.\n";
        }
        else
        {
            cout<<n<<" is not prime.\n";
        }
    }
}
int main()
{
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}