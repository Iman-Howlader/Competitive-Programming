#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int x,a,b,c;
  testcase{
    cin>>x;
    double res;
    int ans=0;
    while (x--)
    {
        cin>>a>>b>>c;
        res=((double)a/b)*c;
        res=ceil(res*b);
        ans+=res;
    }
    cout<<ans<<nl;
    
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
