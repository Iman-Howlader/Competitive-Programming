#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

bool is_prime(int n)
{
    for (int i = 2; i *i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int a,b;
  testcase{
    cin>>a>>b;
    for (int i = a; i<=b; i++)
    {
        if(is_prime(i) && i!=1)
        cout<<i<<nl;
    }
    cout<<nl;
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
