#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int max=0,count=0;
    int x,y;
  testcase{
    cin>>x>>y;
    count+=y-x;
    if(max<count)
    max=count;
  }
  cout<<max<<nl;  
}
int main () {

        fast;
        solve();
        return 0;
   
}
