#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  testcase{
    int n,x,i=10;
    cin>>n;
    vector<int>a;
    while (n!=0)
    {
        x=n%i;
        if(x!=0)
        a.push_back(x);
        n=n-x;
        i*=10;
    }
    cout<<a.size()<<nl;
    for(auto x:a)cout<<x<<" ";
    cout<<nl;
    
    
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
