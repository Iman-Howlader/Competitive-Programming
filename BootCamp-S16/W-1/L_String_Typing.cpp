#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n;
  bool flag=true;
  string s;
  cin>>n>>s;

  int t=n/2;
  while (t>=2)
  {
     if(s.substr(0,t)==s.substr(t,t))
     {
        n=n-t+1;
        break;
     }
     else t--;
  }
  cout<<n<<nl;
   
}
int main () {

        fast;
        solve();
        return 0;
   
}
