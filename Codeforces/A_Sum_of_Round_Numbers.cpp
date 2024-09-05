#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n,x,i;
  testcase{
    cin>>n;
    vector<int>a;
    i=10;
    while (n!=0)
    {
        x=n%i;
        if(x!=0)
        a.push_back(x);
        n=n-x;
        i*=10;
    }
    cout<<a.size()<<nl;
   for (int i = 0; i <a.size(); i++)
   {
     cout<<a[i]<<" ";
   }
   cout<<nl;
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
