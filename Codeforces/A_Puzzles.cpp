#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n,m,ans=INT_MAX;
  cin>>n>>m;
  vector<int>a(m);
  vector<int>b;
  for (int i = 0; i <m; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for (size_t i = 0; i <m-n+1; i++)
  {
    int x=*max_element(a.begin()+i,a.begin()+i+n);
    int y=*min_element(a.begin()+i,a.begin()+i+n);
    if(ans>abs(x-y))
    {
      ans=abs(x-y);
    }
  }
  cout<<ans<<nl;
  
  
  
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
