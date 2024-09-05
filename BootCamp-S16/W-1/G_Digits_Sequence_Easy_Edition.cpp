#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  string s="";
  for (int i = 1; i <=10000; i++)
  {
    s+=to_string(i);
  }
  int k;
   cin>>k;
  cout<<s[k-1];
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
