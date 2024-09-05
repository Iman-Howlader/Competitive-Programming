#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,c,n;
  testcase{
    cin>>a>>b>>c;
    n=ceil((double)c/a)+c/b;
    cout<<n<<nl;

  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
