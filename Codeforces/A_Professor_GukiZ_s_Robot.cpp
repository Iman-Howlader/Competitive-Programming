#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,x,y;
  cin>>a>>b>>x>>y;
  int c=abs(x-a),d=abs(y-b);
  cout<<max(c,d)<<nl;
}
int main () {

        fast;
        solve();
        return 0;
   
}
