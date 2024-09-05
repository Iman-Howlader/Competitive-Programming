#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b;
  cin>>a>>b;
  if(a>b)
  cout<<"New\n" ;
  else if(b>a) cout<<"Old"<<nl;
  else cout<<"Same"<<nl;
}
int main () {

        fast;
        solve();
        return 0;
   
}
