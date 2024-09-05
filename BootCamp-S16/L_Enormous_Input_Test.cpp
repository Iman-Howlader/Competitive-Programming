#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n,t,k,ans=0;
  cin>>t>>n;
  while (t--)
  {
    cin>>k;
    if(k%n==0)
    ans++;
  }
  cout<<ans<<nl;
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
