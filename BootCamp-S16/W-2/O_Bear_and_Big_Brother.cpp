#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,i=0;
  cin>>a>>b;
  while (a<=b)
  {
     a=a*3;
     b=b*2;
     i++;
  }
  cout<<i<<nl;
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
