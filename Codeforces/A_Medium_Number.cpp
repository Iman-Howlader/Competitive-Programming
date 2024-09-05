#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,c;
  testcase{
    cin>>a>>b>>c;
    int x=min({a,b,c});
    int y=max({a,b,c});
    if(a>x && a<y)
    cout<<a<<nl;
    else if(b>x && b<y)
    cout<<b<<nl;
    else if(c>x && c<y)
    cout<<c<<nl;
    
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
