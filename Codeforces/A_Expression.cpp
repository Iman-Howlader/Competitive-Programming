#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v;
  v.push_back(a+b*c);
  v.push_back(a*b+c);
  v.push_back(a+(b+c));
  v.push_back(a*b*c);
  v.push_back((a+b)*c);
  v.push_back(a*(b+c));

  int x=*max_element(v.begin(),v.end());
  cout<<x<<nl;
}
int main () {

        fast;
        solve();
        return 0;
   
}
