#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int x,y,a,b;
  testcase{
        cin>>x>>y;
        a=(x+y)/2;
        b=x-a;
        if(x<y || a+b!=x || abs(a-b)!=y)
        cout<<"impossible\n";
        else
        cout<<a<<" "<<b<<nl;
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
