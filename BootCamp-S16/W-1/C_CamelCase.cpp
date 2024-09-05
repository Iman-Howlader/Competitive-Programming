#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int count=0;
  string s;cin>>s;
  for (int i = 0; i <s.size(); i++)
  {
    if(s[i]>='A'&& s[i]<='Z')
    count++;
  }
  cout<<count+1<<nl;
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
