#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  string s,s1,s2,s3;
  cin>>s1>>s2>>s;
  s3=s1+s2;
  sort(s3.begin(),s3.end());
  sort(s.begin(),s.end());

  if(s==s3)
  cout<<"YES\n";
  else cout<<"NO\n";
  
}
int main () {

        fast;
        solve();
        return 0;
   
}
